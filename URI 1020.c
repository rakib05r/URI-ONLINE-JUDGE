#include <stdio.h>
int main()
{
    int s,y,m,d,a,b;
    scanf("%d",&s);
    y=s/365;///calculate year
    a=s%365;///remaining day
    m=a/30;///
    d=a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
