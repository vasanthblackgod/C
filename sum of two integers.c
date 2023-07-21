#include <stdio.h>

int main() {
    int arr[100],i;
    scanf("%d,&arr")
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
