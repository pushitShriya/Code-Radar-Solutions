#include <stdio.h>
int main(){
    int num , n;
    scanf("%d %d", &num , &n);
    int bitValue = (num >> n) & 1;
    printf("%d", bitValue);
    return 0;
}