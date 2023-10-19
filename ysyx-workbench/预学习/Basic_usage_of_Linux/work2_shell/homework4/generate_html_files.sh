#!/bin/bash

# 创建目录用于存储生成的 HTML 文件
mkdir -p html_files

# 创建多个 HTML 文件
for i in {1..5}; do
  cat > "html_files/page $i.html" <<EOL
<!DOCTYPE html>
<html>
<head>
  <title>Page $i</title>
</head>
<body>
  <h1>This is Page $i</h1>
  <p>Welcome to Page $i. This is a sample HTML file.</p>
</body>
</html>
EOL
done

echo "HTML files generated in 'html_files' directory."

