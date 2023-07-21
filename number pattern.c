#include <stdio.h>
int main()
{
  int num,i,j,s;
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
     for(j=1;j<=num-i;j++)
     {
      printf("  ");
     }
     for(s=0;s<=i;s++)
    {
      printf("* ");
    }
     printf("\n");
  }
}

