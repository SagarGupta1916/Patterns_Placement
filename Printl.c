// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the height of L pattern: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         if (i == n) {
//             for (int j = 1; j <= n; j++) {
//                 printf("* ");
//             }
//         } else {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int n;
    printf("Enter the height of L pattern: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * n; i++) {
        if (i % n == 1 || i > n * (n - 1)) {
            printf("* ");
        } else {
            printf("  ");
        }
        if (i % n == 0)
            printf("\n");
    }
    return 0;
}


