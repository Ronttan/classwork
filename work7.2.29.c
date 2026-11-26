#include <stdio.h>
int main()
{
    char c;
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int newlines = 0;
    int others = 0;
    printf("请输入一串字符（输入 # 结束）：\n");
    while ((c = getchar()) != '#') 
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
        {
            letters++;
        }
        else if (c >= '0' && c <= '9') 
        {
            digits++;
        }
        else if (c == ' ') 
        {
            spaces++;
        }
        else if (c == '\n') 
        {
            newlines++;
        }
        else 
        {
            others++;
        }
    }
    printf("\n--- 统计结果 ---\n");
    printf("英文字母: %d 个\n", letters);
    printf("数字:     %d 个\n", digits);
    printf("空格:     %d 个\n", spaces);
    printf("换行符:   %d 个\n", newlines);
    printf("其它字符: %d 个\n", others);
}