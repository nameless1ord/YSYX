#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j;
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        switch (letter) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("The letter %c is a vowel.\n", letter);
                break;
            default:
                printf("The letter %c is a consonant.\n", letter);
                break;
        }
    }

    printf("\n");

    for (i = 1; i < argc; i++) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            char c = argv[i][j];
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a'; // 转换为小写字母
            }

            switch (c) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    printf("The letter %c in argument %d is a vowel.\n", c, i);
                    break;
                default:
                    printf("The letter %c in argument %d is a consonant.\n", c, i);
                    break;
            }
        }
    }

    return 0;
}
