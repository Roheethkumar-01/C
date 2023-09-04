#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    printf("Enter the limit:");
    scanf("%d",&n);
    int* ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Nothing");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Enter %d th value: ",i);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\nEnter the excess limit you needed(includes above n also:");
    scanf("%d",&m);
    ptr=(int*)realloc(ptr,m*sizeof(int));
    for(int i=n;i<m;i++){
        printf("Enter %d th value: ",i+1);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<m;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}
