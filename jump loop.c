#include<stdio.h>
int main()
{
  int a[100],n,count=0,temp=0,i,m=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if((n-1)>m)
  {
    temp++;
    count=a[count]+count;
    m=i+count;
  }
  else
  {
    break;
  }
  }
  printf("%d",temp);
  return 0;
}
