#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int position=0;
    while((n&1)==0 && n != 0){
        n>>1;
        position++;
    }
    printf("%d",(n==0)?-1:position);
    return 0;
}