#include <stdio.h>
int main(){
    int num , n;
    scanf("%d %d", &num , &n);
    if(n<0 || n>31){
        return 1;
    }
    int new_val = num &~(1<<n);
    printf("%d",new_val);
    return 0;
}