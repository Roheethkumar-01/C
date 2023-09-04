//calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Nothing");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter a integer:");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("\n%d : %d ",&ptr+i,*(ptr+i));
    }
    free(ptr);
    return 0;
}
