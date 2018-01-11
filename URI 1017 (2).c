#include <stdio.h>
int main()
{
    int a,b,c;
    double d;
    scanf("%d%d",&a,&b);
    c=a*b;
    d=c/12.0;
    printf("%0.3lf\n",d);
    return 0;
}
