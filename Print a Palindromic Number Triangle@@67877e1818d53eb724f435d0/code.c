#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int space=1;space<=number-i;space++){
            printf(" ");
        }
        for(int j=1;j<2*i-1;j++){
            printf("%d",j);
        }
        // for(int j=number-1;j>=;j--){
        //     printf("%d",j);
        // }
        printf("\n");
    }
    return 0;
}