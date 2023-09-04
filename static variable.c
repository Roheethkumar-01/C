//Static variable

#include<stdio.h>

void display(){
    static int i=1;
    i++;
    printf("\nX:%d",i);
}
int main(){
    int lim;
    printf("Enter the limit:");
    scanf("%d",&lim);
    for(int i=0;i<lim;i++){
        display();
    }
}
