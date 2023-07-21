#include<stdio.h>
int main()
{
    int in,ex,i=0;
    float inte=18,ext=12,cost=0,temp;
    scanf("%d %d",&in,&ex);
    scanf("%f",&temp);
    if(in<0 || ex<0 )
    {
        printf("INVALID INPUT");
    }
    else(in==0 && ex==0)
    {
        printf("Total estimated Cost : 0.0");
    }
        for(i=0;i<in;i++)
        {
           cost+= inte*temp;
        }
        for(i=0;i<ex;i++)
        {
           cost+= ext*temp;
        }
        {
          printf("Total estimated Cost : %.1f",cost);
        }

    return 0;
}
