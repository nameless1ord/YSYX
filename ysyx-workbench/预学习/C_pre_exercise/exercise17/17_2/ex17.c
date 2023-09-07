#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/*
#define MAX_DATA 512
#define MAX_ROWS 100
*/

int MAX_DATA;
int MAX_ROWS;

struct Address {
    int id;
    int set;
    char *name;
    char *email;
};

struct Database {
    struct Address *rows;
};

struct Connection {
    FILE *file;
    struct Database *db;
};


void die(const char *message, struct Connection *conn)
{
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    if (conn) {
        if (conn->file) {
            fclose(conn->file);
        }

        if (conn->db) {
            for (int i = 0; i < MAX_ROWS; i++) {
                if (conn->db->rows[i].name) {
                    free(conn->db->rows[i].name);
                }
                if (conn->db->rows[i].email) {
                    free(conn->db->rows[i].email);
                }
            }
            free(conn->db->rows);
            free(conn->db);
        }
        free(conn);
    }
    exit(1);
}
void Address_print(struct Address *addr)
{
    printf("%d %s %s\n",
            addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) die("Failed to load database.", conn);
}

struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error", conn);

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory error", conn);

		// 根据 MAX_ROWS 与 MAX_DATA 初始化内存
		conn->db->rows = malloc(sizeof(struct Address) * MAX_ROWS);
		if(!conn->db->rows) die("Memory error", conn);

		for(int i = 0; i < MAX_ROWS; i++) {
				conn->db->rows[i].name = malloc(sizeof(char) * MAX_DATA);
				if(!conn->db->rows[i].name) die ("Memory error", conn);

				conn->db->rows[i].email = malloc(sizeof(char) * MAX_DATA);
				if(!conn->db->rows[i].email) die("Memory error", conn);

			  if(mode == 'c') {
						 conn->file = fopen(filename, "w");
				 }
				else {
						 conn->file = fopen(filename, "r+");

						 if(conn->file) {
									 Database_load(conn);
							}
				}

				 if(!conn->file) die("Failed to open the file", conn);
		}
    return conn;
}

void Database_close(struct Connection *conn)
{
    if (conn) {
        if (conn->file) {
            fclose(conn->file);
        }

        if (conn->db) {
            for (int i = 0; i < MAX_ROWS; i++) {
                if (conn->db->rows[i].name) {
                    free(conn->db->rows[i].name);
                }
                if (conn->db->rows[i].email) {
                    free(conn->db->rows[i].email);
                }
            }
            free(conn->db->rows);
            free(conn->db);
        }
        conn->db = NULL; // 将 conn->db 设置为 NULL
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
    rewind(conn->file);

    int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) die("Failed to write database.", conn);

    rc = fflush(conn->file);
    if(rc == -1) die("Cannot flush database.", conn);
}

void Database_create(struct Connection *conn)
{
    int i = 0;

    for(i = 0; i < MAX_ROWS; i++) {
        // make a prototype to initialize it
        struct Address addr = {.id = i, .set = 0};
        // then just assign it
        conn->db->rows[i] = addr;
    }
}

// 新加Database_find函数
void Database_find(struct Connection *conn, const char *name)
{
		struct Database *db = conn->db;
		int j = 0;
		for(int i = 0; i < MAX_ROWS; i++) {
				struct Address *cur = &db->rows[i];
				if(strcmp(cur->name, name) == 0 && cur->set) {
						Address_print(cur);
						j++;
				}
				break;
		}
		char error_message[30] = "Cannot find ";
		if(!j) die(strcat(error_message, name), conn);
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
    struct Address *addr = &conn->db->rows[id];
    if(addr->set) die("Already set, delete it first", conn);

    addr->set = 1;
    // WARNING: bug, read the "How To Break It" and fix this
    char *res = strncpy(addr->name, name, MAX_DATA);
    // demonstrate the strncpy bug
    if(!res) die("Name copy failed", conn);

    res = strncpy(addr->email, email, MAX_DATA);
    if(!res) die("Email copy failed", conn);
}

void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = &conn->db->rows[id];

    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set", conn);
    }
}

void Database_delete(struct Connection *conn, int id)
{
    struct Address addr = {.id = id, .set = 0};
    conn->db->rows[id] = addr;
}

void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;

    for(i = 0; i < MAX_ROWS; i++) {
        struct Address *cur = &db->rows[i];

        if(cur->set) {
            Address_print(cur);
        }
    }
}

int main(int argc, char *argv[])
{
		// ex17 db.dat <action> <MAX_DATA> <MAX_ROWS> <id> <name> <email>
    if(argc < 5) printf("USAGE: ex17 db.dat <action> <MAX_DATA> <MAX_ROWS> [action params]");

    char *filename = argv[1];
    char action = argv[2][0];
		char name[30];
		char email[50];
		if(argc > 6) strcpy(name, argv[6]);
		if(argc > 7) strcpy(email, argv[7]);
		
		// 全局变量赋值
		MAX_DATA = atoi(argv[3]);
		MAX_ROWS = atoi(argv[4]);

    struct Connection *conn = Database_open(filename, action);


    int id = 0;
    if(argc > 5) id = atoi(argv[5]);
    if(id >= MAX_ROWS) die("There's not that many records.", conn);

    switch(action) {
        case 'c':
            Database_create(conn);
            Database_write(conn);
            break;
				// 输入 ex17 db.dat f <任意数字> <人名> 完成find功能
				case 'f':
						Database_find(conn, name);
						break;

        case 'g':
            if(argc != 4) die("Need an id to get", conn);

            Database_get(conn, id);
            break;

        case 's':
            if(argc != 6) die("Need id, name, email to set", conn);

            Database_set(conn, id, name, email);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete", conn);

            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list, f=find", conn);
    }

    Database_close(conn);

    return 0;
}

