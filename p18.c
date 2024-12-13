#include <stdio.h>

int main(void)
{
    FILE *in,*out;
    int cnt;
    char str[100];
    in=fopen("welcome.txt","r");
    out=fopen("output.txt","w");

    while (!feof(in))
    {
        cnt=fscanf(in,"%s",str);
        if(cnt>0)
            fprintf(out,"%s\n",str);
    }
    fclose(in);
    fclose(out);
    return 0;
}