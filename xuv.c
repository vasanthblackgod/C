#include<stdio.h>
int main()
{
    int a[100][100],i,j,n;
    //scanf("%d",&n);
    n = 20;
    //j = 20;
    int k=1;
    for(i=1;i<=10;i++)
    {
        for( j=1; j<=n; j++){
            if(j<=i){
                printf("*");
            }else if(j>=n){
                printf("*");
                n--;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
