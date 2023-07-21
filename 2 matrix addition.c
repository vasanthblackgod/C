#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<r;i++)
    { int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
         printf("%d ",sum);
    }
    printf("\n");
    for( i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[j][i];
        }
         printf("%d ",sum);
    }
    return 0;
}




