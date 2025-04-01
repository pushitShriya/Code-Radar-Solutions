#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        for(int j=number;j>=number;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}