#include<stdio.h>
int main(){
    int a , b , c , sum , average;
    scanf("%d %d %d" , &a , &b , &c);
    sum = a + b + c;
    average = sum / 3;
    printf("Average: %.2f " , average);
    return 0;
    
}