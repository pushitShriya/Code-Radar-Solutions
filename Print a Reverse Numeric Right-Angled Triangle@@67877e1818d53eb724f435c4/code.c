#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}