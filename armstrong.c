#include <stdio.h>
#include<math.h>
int main()
{
    int a,b=0,val=0,sum=1;
    printf("Enter the number to check: ");
    scanf("%d",&a);
    int temp=a;
    int temp1=a;
    while(temp1!=0){
        temp1/=10;
        b++;
    }
    while(temp!=0){
        int rem=temp%10;
        // sum=sum+(pow(rem,b));
        for(int i=0;i<b;i++){
            sum=sum*rem;
        }
        val+=sum;
        sum=1;
        temp/=10;
    }
    if(val==a){
        printf("It is armstrong");
    }
    else{
        printf("It is not the armstrong");
    }
    return 0;
}