#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int a=0,b=1,c;
    for(i=1; i<n; i++)
    {
       c=a+b;
       a=b;
       b=c;
    }
    printf("%d",c);
}
