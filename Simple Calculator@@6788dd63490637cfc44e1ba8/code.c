#include <stdio.h>
int main(){
    int a , b;
    char oper;
    scanf("%d %d",  &a , &b);
    scanf("%c",&oper);

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
        printf("%d",a/b);
        break;

        default:
        printf("Invalid");
    }
    return 0;
}