#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        int start = i % 2; // Determines if the row starts with 1 or 0
        for (j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; // Alternates between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
