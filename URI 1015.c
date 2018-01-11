#include <stdio.h>
#include <math.h>
int main()
{
    double X1,X2,Y1,Y2,d,a,b,c,e,f,g;
    scanf("%lf%lf",&X1,&Y1);
    scanf("%lf%lf",&X2,&Y2);
    a=X1-X2;
    e=a*a;
    b=Y1-Y2;
    f=b*b;
    g=e+f;
    d=sqrt(g);
    printf("%0.4lf\n",d);
    return 0;
}
