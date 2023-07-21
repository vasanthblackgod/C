#include <stdio.h>
int main()
{
  int num,i,s;
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
     for(s=0;s>i;s++)
    {
      printf("*");
    }
     printf("\n");
  }
}

