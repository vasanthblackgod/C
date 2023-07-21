#include<stdio.h>
int main()
{
    int size,i,j,count=0;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(i<j)
            {
                if(a[i]>a[j])
                   {
                       printf("(%d,%d),",a[i],a[j]);
                        count++;
                   }
            }
        }
    }
    printf("The inversion count is %d",count);
    return 0;
}
