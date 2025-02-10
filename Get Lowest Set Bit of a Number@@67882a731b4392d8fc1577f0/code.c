#include <stdio.h>
int main(){
    int num,lowest_bit;
    scanf("%d",&num);
    lowest_bit = num & -num;
    printf("%d",num ,lowest_bit);
    return 0;
}