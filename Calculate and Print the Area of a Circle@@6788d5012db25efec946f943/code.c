#include <stdio.h>
int main(){
    float num;
    float pi = 3.14 , area;
    scanf("%f" , &num);
    area = pi*num*num;
    printf("Area: %.2f ", area);
    return 0;
}