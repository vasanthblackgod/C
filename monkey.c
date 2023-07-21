#include<stdio.h>
int main()
{
    int n,m,p,k,j;
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&j);
    scanf("%d",&m);
    scanf("%d",&p);
    int t=(m/k)+(p/j);
    if(m%k!=0)
        t++;
    if(p%j!=0)
        t++;
    printf("%d",n-t);
    return 0;
}
