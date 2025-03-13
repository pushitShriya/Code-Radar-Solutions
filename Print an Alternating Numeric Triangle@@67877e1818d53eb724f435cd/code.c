#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = (num == 1) ? 0 : 1;  
        }
        printf("\n");
    }

    return 0;
}
