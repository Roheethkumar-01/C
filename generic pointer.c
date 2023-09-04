//Generic or void pointers

#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    void *p;
    p=&a;
    printf("%d",*(int *)p);
}
