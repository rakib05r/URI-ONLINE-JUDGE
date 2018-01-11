#include<stdio.h>
int main()
{
    double a;
    int b,count=0;
    for(b=1;b<=6;b++){
        scanf("%lf",&a);
        if(a>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
