#include <stdio.h>
int main()
{
    int a,b,a1,b1;
    double c,d,e,f,m,n;
    scanf("%d%d%lf",&a,&b,&c);
    scanf("%d%d%lf",&a1,&b1,&d);
    e=b*c;
    f=b1*d;
    m=e+f;
    printf("VALOR A PAGAR: R$ %0.2lf\n",m);
    return 0;
}
