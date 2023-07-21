#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

