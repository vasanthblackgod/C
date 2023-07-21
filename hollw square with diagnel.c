#include <stdio.h>
int main()
{
    int i,j,num=20;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==1||j==1||i==num||j==num||i+j==num+1||i==j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
