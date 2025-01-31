#include <stdio.h>
int main(){
    int num;
    float pi = 3.14 , area;
    scanf("%d" , &num);
    area = pi*num*num;
    printf("Area: %.2f", area);
    return 0;
}