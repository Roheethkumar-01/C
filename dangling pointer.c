//Dangling pointer
#include<stdio.h>
int * values(){
    int a=10;
    return &a;
}
int main(){
    int *ptr;
    ptr=values();
    printf("%d",*ptr);
}
