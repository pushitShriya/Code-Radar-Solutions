#include <stdio.h>
int main(){
    int num , n;
    scanf("%d %d", &num , &n);
    int result = clearNthBit(num,n);
    printf("%u" , n, result);
    return 0;
}