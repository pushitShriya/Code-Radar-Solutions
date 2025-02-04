#include <stdio.h>
int main(){
    int age,citizen;
    scanf("%d",&age);
    if(age>=18 && citizen ==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}