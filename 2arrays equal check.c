#include<stdio.h>
int main()
{
    int arr[100],brr[100],a1,b1;
    scanf("%d",&a1);
    scanf("%d",&b1);
    int i,j,count=0;
    for(i=0; i<a1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<b1; i++)
    {
        scanf("%d", &brr[i]);
    }
    if(a1==b1)
    for(i = 0; i < a1; i++)
    {
        for(j=0; j<b1; j++)
        {
            if(arr[i]==brr[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==a1)
    {
        printf("Arrays Are Equal");
    }
    else
    {
        printf("Arrays Are Not Equal");
    }
    return 0;
}
