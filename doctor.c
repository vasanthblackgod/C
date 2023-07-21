#include<stdio.h>
int main()
{
    int age[100], i, n, earn = 0;
    printf("Enter the number of patients visited on that day: ");
    scanf("%d", &n);
    printf("Enter the age of patients visited on that day:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &age[i]);
        if(age[i] < 17)
            earn += 200;
        else if(age[i] >= 17 && age[i] <= 40)
            earn+= 400;
        else
            earn+= 300;
    }
    printf("Earnings of the doctor's clinic based on patient age: %d\n", earn);
    return 0;
}
