#include<stdio.h>
int main(){
    int number,count=1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }   
    return 0;
}