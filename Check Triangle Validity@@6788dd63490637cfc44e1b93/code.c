#include <stdio.h>
int main(){
    int side1 , side2 , side3;
    scanf("%d %d %d" , &side1 , &side2 , &side3);
    if(side1+side2>side3){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
