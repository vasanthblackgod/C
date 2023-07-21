#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[200];
    gets(str);
    char*word;
    word=strtok(str," ");
    while(word!=NULL)
    {
        printf("%s\n",word);
        word=strtok(NULL," ");

    }
    return 0;
}
