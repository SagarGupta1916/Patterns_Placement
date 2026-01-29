#include <stdio.h>
int main() {
    int n = 5;  
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("*");
            else if (i + j == mid || j - i == mid ||
                     i - j == mid || i + j == mid * 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
