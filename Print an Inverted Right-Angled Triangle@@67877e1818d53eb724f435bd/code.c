#include<stdio.h>
int main(){
 int i , j , number;
 scanf("%d",&number);
 for(j=1;j<=number;j++){
    for(i=1;i<=number;i++){
        if(i+j<=number)
        printf("* ");
        else
        printf(" ");
    }
    printf("\n");
 }
 return 0;
}