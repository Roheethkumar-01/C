//Malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Nothing");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Enter a integer:");
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}
