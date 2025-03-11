#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        char ch = 'A';
        for(int j=1;j<=number;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}