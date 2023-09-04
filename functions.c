#include <stdio.h>
int add(){
    int a,b;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("\nEnter number b:");
    scanf("%d",&b);
    int c=a+b;
    printf("\nAddition:%d",c);
    printf("\n");
}
int main()
{
    int lim;
    printf("Enter limit: ");
    scanf("%d",&lim);
    for(int i=0;i<lim;i++){
        add();
    }

    return 0;
}
