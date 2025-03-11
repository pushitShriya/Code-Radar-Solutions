#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=number;j>=number;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}