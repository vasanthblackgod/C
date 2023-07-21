#include<stdio.h>
int main()
{
  int a[100],k,n,temp=0,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     {
      if(a[i]<a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
     }
   }
   printf("%d",a[k-1]);
}
