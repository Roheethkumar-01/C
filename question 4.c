//Fahrenheit to celsius

#include<stdio.h>
int main(){
    float f,c;
    printf("Enter fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("Celsius:%.2f",c);
    return 0;
}
