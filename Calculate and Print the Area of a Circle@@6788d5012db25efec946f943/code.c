#include <stdio.h>
int main(){
    int num , pi , area;
    pi = 3.14;
    scanf("%d" , &num);
    area = pi*num**2;
    printf("Area: %d", area);
    return 0;
}