#include <stdio.h>
int main()
{
  int i,n,f=1;
  scanf("%d",&n);
  for (i=1; i<=n; i++)
    f = f * i;
  printf("Factorial  %d=%d\n", n, f);
  return 0;
}
