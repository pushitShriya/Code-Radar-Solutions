#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num >=1 && num <= 100){
        printf("In Range");
    }
    else{
        print("Out of Range");
    }
    return 0;
}