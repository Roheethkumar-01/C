/*The distance between two cities(in km.) is input. Write a program to convert and print this distance in meters, feet, inches and centimeters.*/

#include<stdio.h>
int main(){
    float km,m,cm,fe,in;
    printf("\nEnter the Kilometer: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    in=cm/2.54;
    fe=in/12;
    printf("\nKilometer: %f",km);
    printf("\nMeter: %f",m);
    printf("\nCentimeter: %f",cm);
    printf("\nInch: %f",in);
    printf("\nfeet: %f",fe);
    return 0;
}
