//Sum of first and last digit

#include<stdio.h>
int main(){
    int num,rem,mod=1,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;
    int temp1=num;
    while(temp!=0){
        rem=temp%10;
        count++;
        temp/=10;
    }
    // printf("\n%d",count);
    for(int i=1;i<count;i++){
        mod=mod*10;
    }
    // printf("\n%d",mod);
    int rem1=temp1%10;
    // printf("\n%d",rem1);
    int divi=temp1/mod;
    // printf("\n%d",rem2);
    int sum=rem1+divi;
    printf("\nSum: %d",sum);
}
