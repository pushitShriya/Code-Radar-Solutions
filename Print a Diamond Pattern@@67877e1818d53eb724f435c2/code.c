#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-i;space++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%c",j+64);
        }
        printf("\n");
    }

    for(int i=number-1;i>=1;i--){
        for(int space=1;space<=number-i;space++){
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
}