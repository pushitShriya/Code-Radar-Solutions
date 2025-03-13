#include<stdio.h>
int main(){
    int number,num=1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            printf("%d", num);
            num = (num==1)?0:1;
        }
        printf("\n");
    }
    return 0;
}