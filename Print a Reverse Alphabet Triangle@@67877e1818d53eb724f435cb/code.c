#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=number;j>=1;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}