#include <stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    if(temp>0){
        printf("Above Freezing");
    }
    else if(temp<0 || temp==0){
        printf("Freezing");
    }
    return 0;
}