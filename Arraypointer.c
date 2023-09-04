#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int *p;
    p=&arr;
    printf("\n%d",p);
    printf("\n%d",&arr);
    printf("\n%d",sizeof(arr)/sizeof(int));
    p++;
    printf("\n%d",*p);
    printf("\n%d",++*p);
    printf("\n%d",*++p);
    return 0;
}
