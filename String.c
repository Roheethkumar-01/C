#include<stdio.h>
#include<string.h>

int main()
{
    char c[20],a[20];
    char x[10]={'R','A','M','\0'};
    char y[10]={'K','U','M','A','R','\0'};
    printf("x : %s",x);
    printf("\nEnter The String : ");
    gets(c);

    printf("\nCompare   : %d ",strcmp(x,c));//String Compare
    printf("\nLength    : %d ",strlen(c));//String Length
    printf("\nReverse   : %s ",strrev(c));//String Reverse
    printf("\nUppercase : %s ",strupr(c));//String Upper
    printf("\nLowercase : %s ",strlwr(c));//String Lower
    printf("\nCopy      : %s ",strcpy(a,c));//String Copy
    strcat(x,y);
    printf("\nConcatenation : %s ",x);//String Concatenation
    return 0;
}
