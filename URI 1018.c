#include <stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g,h,i,j,k,l,m,o,p;
    scanf("%d",&N);
    if(N>0 && N<10000000)
    a=N/100;///100 note
    b=N%100;
    c=b/50;///50 note
    d=b%50;
    e=d/20;///20 note
    f=d%20;
    g=f/10;///10 note
    h=f%10;
    i=h/5;///5note
    j=h%5;
    k=j/2;///2note
    l=j%2;
    m=l/1;///1note
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,c,e,g,i,k,m);
    return 0;

}
