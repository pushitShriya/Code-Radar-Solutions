#include <stdio.h>
int kain(){
    int age;
    scanf("%d",&age);
    if(age>=60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}