#include <stdio.h>
int main() {
    int n = 9;   
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if((i == 1 && j % 4 == 1) ||
                (i == 2 && j % 2 == 0)||
                 (i == 3 && j % 4 == 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
