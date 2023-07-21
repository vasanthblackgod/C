#include<stdio.h>
int main()
{
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);
    int a[n],a1[m],n1=0,m1=0,i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        n1+=a[i];
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
        m1+=a1[i];
    }
    if(n1==m1)
    {
        printf("balanced");
    }
    else if(n1>m1)
    {
    sum=n1-m1+r;
    printf("%d",-sum);

    }
    else
    {
        sum=n1-m1;
        printf("%d",sum);
    }

}
