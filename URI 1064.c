#include <stdio.h>
int main()
{
    double a,b,avg,sum=0;
    int i,c=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&a);
        if(a>0){
            sum=sum+a;
            c++;
        }
    }
    avg=sum/c;
    printf("%d valores positivos\n",c);
    printf("%0.1lf\n",avg);
        return 0;
}
