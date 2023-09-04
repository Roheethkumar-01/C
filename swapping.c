//Swapping
#include<stdio.h>
int main(){
    int c,d,temp;
    scanf("%d%d",&c,&d);
    temp=c;
    c=d;
    d=temp;
    printf("C:%d",c);
    printf("\nD:%d",d);
    return 0;
}
