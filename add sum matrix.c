#include <stdio.h>
int main()
 {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  scanf("%d", &r&c);
  {
    for (i = 0; i < r; J++)
    {
     for (j = 0; j < c; J++)
    {
     scanf("%d",&a[i][j]);
    }


  scanf("%d", &b[i][j]);
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }


    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("%d   ", sum[i][j]);
      if (j == c - 1)
       {
        printf("\n");
       }
    }

  return 0;
}
