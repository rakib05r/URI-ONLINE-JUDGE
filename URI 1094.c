#include <stdio.h>
int main()
{
    int n,i,a,b,c,co=0,ro=0,so=0;
    char an;
    double cp,rp,sp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&a,&an);
        if(an=='C'){
            co=co+a;
        }
        else if(an=='R'){
            ro=ro+a;
        }
        else if(an=='S'){
            so=so+a;
        }
    }
    b=co+ro+so;
    cp=(co*100.0)/b;
    rp=(ro*100.0)/b;
    sp=(so*100.0)/b;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %0.2lf\nPercentual de ratos: %0.2lf\nPercentual de sapos: %0.2lf\n",b,co,ro,so,cp,rp,sp);
    return 0;
}
