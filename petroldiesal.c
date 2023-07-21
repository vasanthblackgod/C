#include <stdio.h>
int main()
{
    int a,b,c,d,e,petrol,diesel;
    int a1,b1,c1,d1,e1;
    int n=60;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
    petrol=c+n*(d/(a*b)+e);
    diesel=c1+n*(d1/(a1*b1)+e1);
    printf("The cost for petrol vehicle is %d",petrol);
    printf("The cost for petrol vehicle is %d",diesel);
    if(petrol>diesel)
    {
        printf("DIESEL");
    }
    else
    {
        printf("PETROL");
    }
    return 0;
}
