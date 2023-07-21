#include<stdio.h>
int main()
{
   int arr[100],i,size;
   scanf("%d",&size);
   for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(i=5;i>=0;i--)
{
    printf("%d",arr[i]);
}
return 0;
}
