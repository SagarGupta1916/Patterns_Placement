#include <stdio.h>
int main() {
    int n = 9;   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 4 == 0 || (i == 1 && j % 4 == 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
