#include <stdio.h>
int main() {
    int rows, i, j;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        int start = i % 2; 
        for (j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start;
        }
        printf("\n");
    }
    return 0;
}