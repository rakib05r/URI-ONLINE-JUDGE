#include <stdio.h>
int main()
{
    int N,i,j;
    double a,b,c,avg;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        avg=(a*2)+(b*3)+(c*5)/(2+3+5);
    }
    printf("%lf\n",avg);
    return 0;
}
