//Input: Length and breadth of rectangle,radius of circle.
//Find area and perimeter of rectangle and area & circumference of circle
#include<stdio.h>
int main(){
    int l,b,a_rec,p_rec;
    float cir,rad,a_cir;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    a_rec=l*b;
    p_rec=2*(l+b);
    printf("Area of the rectangle: %d",a_rec);
    printf("\nPerimeter of the rectangle: %d",p_rec);
    printf("\nEnter radius of circle: ");
    scanf("%f",&rad);
    cir=2*3.14*rad;
    a_cir=3.14*rad*rad;
    printf("\nArea of circle:%.2f",a_cir);
    printf("\nCircumference:%.2f",cir);
}
