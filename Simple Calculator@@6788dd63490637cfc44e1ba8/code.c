#include <stdio.h>
int main(){
    int a , b;
    char oper;
    scanf("%d %d",  &a , &b);
    scanf(" %c",&oper);

    switch(oper){
        case '+':
        printf("%d",a+b);
        break;
        

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        if(b!=0){
            printf("%d" , a/b);
        }
        else{
            printf("error");
        }
        break;

        default:
        printf("Invalid");
    }
    return 0;
}