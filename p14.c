#include <stdio.h>

int main(void)
{
    FILE *fptr;
    char ch;
    int count = 0;

    fptr=fopen("welcome.txt","r");
    if (fptr!=NULL)
    {
        while ((ch=getc(fptr))!=EOF)
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        printf("\n總共有%d個字元\n",count);
    }
    else
        printf("檔案開啟失敗！\n");

    return 0;
}