#include <stdio.h>
#include <string.h>
void encodeString(char arr[], char alpha[], int num[]) {
    int length = strlen(arr);
    int count = 1;
    int index = 0,i;

    for (i = 0; i < length; i++) {
        if (arr[i] == arr[i+1]) {
            count++;
        } else {
            alpha[index] = arr[i];
            num[index] = count;
            index++;
            count = 1;
        }
    }
    alpha[index] = '\0';
    for (i = 0; alpha[i] != '\0'; i++) {
        printf("%c%d", alpha[i], num[i]);
    }
}
int main() {
    char arr[15];
    char alpha[100];
    int num[100];
    int i;
    for(i=0;i<arr;i++)
    {
        scanf("%c",&arr[i]);
    }
    encodeString(arr, alpha, num);
    return 0;
}
