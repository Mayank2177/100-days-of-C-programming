#include <stdio.h>

int main() {
    int N, i, j;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop to generate the pattern
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

