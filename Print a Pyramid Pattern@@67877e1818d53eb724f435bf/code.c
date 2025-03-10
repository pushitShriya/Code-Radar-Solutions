#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-1;space++){
            printf(" ");
        }
        for(int j=1;j>=number;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}