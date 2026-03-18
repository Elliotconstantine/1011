#include <stdio.h>

int main() {
    FILE* fp;
    char ch;
    const char* filename = "1.txt";  

    // 1. 以写模式打开文件
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("? 无法创建文件 %s！请检查是否有写入权限。\n", filename);
        return 1;  // 退出程序
    }

    // 2. 提示用户输入
    printf("?? 请输入文字（输入 '@' 结束）：\n");

    // 3. 逐个读取字符，直到遇到 '@'
    while ((ch = getchar()) != '@') {
        fputc(ch, fp);  // 写入文件
    }

    // 4. 关闭文件（非常重要！）
    fclose(fp);

    printf("\n? 输入已成功保存到 %s\n", filename);
    return 0;
}
