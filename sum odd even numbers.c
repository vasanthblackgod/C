#include<stdio.h>
int main()
{
    int s,i;
    int sum=0,sum1=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
      scanf("%d",&a[i]);
    }
    for( i=0;i<s;i++)
    {
        if(a[i]%2==0)
    {
      sum=sum+a[i];
    }
    else
    {
      sum1=sum1+a[i];
    }
    }
    printf("2=%d\n",sum1);
    printf("1=%d",sum);
}

