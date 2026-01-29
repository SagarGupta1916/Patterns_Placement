#include <stdio.h>
int main() {
    int n;
    printf("Enter an odd number for size of plus pattern: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }
    int mid = n / 2;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid || j == mid)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
