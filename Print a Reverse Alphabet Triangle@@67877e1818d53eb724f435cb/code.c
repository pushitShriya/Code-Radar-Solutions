#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}