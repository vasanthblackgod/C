#include <stdio.h>
int main()
 {

  char ch;
  double fi, se;
  printf("Enter an operator (1,2,3,4): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("%lf %lf", &fi, &se);

  switch (ch)
{
    case  '1':
      printf("%.1lf + %.1lf = %.1lf", fi, se, fi + se);
      break;
    case '2':
      printf("%.1lf - %.1lf = %.1lf", fi, se, fi - se);
      break;
    case '3':
      printf("%.1lf * %.1lf = %.1lf", fi, se, fi* se);
      break;
    case '4':
      printf("%.1lf / %.1lf = %.1lf", fi, se, fi / se);
      break;

    default:
      printf("Error! operator is not correct");
}
return 0;
}
