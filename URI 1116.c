#include <stdio.h>
int main()
{
    double X,Y,D;
    int a,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++){
        scanf("%lf%lf",&X,&Y);
        D=X/Y;
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%0.1lf\n",D);
        }
    }
    return 0;
}
