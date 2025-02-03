#include <stdio.h>
int main(){
    int num , n , bitValue;
    scanf("%d %d", &num , &n);
    bitValue = (num >> n) & 1;
    printf("%d", bitValue);
    return 0;
}