#include<stdio.h>
int main()
{
    int n,temp,i,j,k;
    scanf("%d",&n);
    int a[n];
    if(n<2)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        printf("%d %d",a[0],a[1]);
    }
}
