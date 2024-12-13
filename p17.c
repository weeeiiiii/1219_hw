#include <stdio.h>
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX];
    int bytes;
    fptr=fopen("output.txt","r");
    while (!feof(fptr))
    {
        bytes=fread(str,sizeof(char),MAX-1,fptr);
        str[bytes]='\0';//確保字符串 str 是一個有效的以 \0（空字符）結尾的 C 字符串
        printf("%s\n",str);
    }
    fclose(fptr);
    return 0;
}
