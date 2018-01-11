#include <stdio.h>
int main()
{
    int t,avg,d;
    double n;
    scanf("%d%d",&t,&avg);
    d=t*avg;
    n=(d/12);
    printf("%0.5lf\n",n);
    return 0;
}
