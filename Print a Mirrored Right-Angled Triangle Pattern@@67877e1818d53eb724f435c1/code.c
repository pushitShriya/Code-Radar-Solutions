#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number;j++){
            if(i+j<=number)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}