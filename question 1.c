/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic
salary. Write a program to calculate his gross salary.*/

#include<stdio.h>
int main(){
    float bs,da,hra,gs;
    printf("Enter basic salary: ");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\nBasic salary: %.2f",bs);
    printf("\nHouse rent allowance: %.2f",hra);
    printf("\nDearness allowance: %.2f",da);
    printf("\nGross salary: %.2f",gs);
    return 0;
}
