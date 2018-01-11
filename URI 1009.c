#include <stdio.h>
int main()
{
    char n[100];
    double a,b,c,d;
    scanf("%s%lf%lf",n,&a,&b);
    c=(15*b)/100;
    d=a+c;
    printf("TOTAL = R$ %0.2lf",d);
    return 0;
}
