/*If the marks obtained by a student in five different subjects are
input. Find out the aggregate marks and percentage marks obtained by the
student. Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float avg;
    printf("Enter five marks: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int total=m1+m2+m3+m4+m5;
    avg=total/5;
    printf("Total:%.2f",avg);
    return 0;
}
