#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-i;space++){
            printf(" ");
        }
        for(int i=1;i<=2*i-1;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}