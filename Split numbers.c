#include<stdio.h>
int main()
{
  int a,rem,sum=0,product=1;
  scanf("%d",&a);
  while(a!=0)
  {

      rem=a%10;
      a=a/10;
      sum=sum+rem;
      product=product*rem;
  }
  if(sum==product)
  {
    printf("Equal");
  }
  else
  {
      printf("Not equal");
  }
   return 0;
}
