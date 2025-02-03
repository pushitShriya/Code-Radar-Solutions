#include<stdio.h>
int main(){
    int num , msb_num;
    scanf("%d" , &num);
    msb_num = 1 << 31;
    if(num & msb_num){
        printf("Set");
    }
    else{
        printf("Not Set")
    }
    return 0;
}