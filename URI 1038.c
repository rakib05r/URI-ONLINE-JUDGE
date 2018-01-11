#include <stdio.h>
int main()
{
    int X,Y;
    double T;
    scanf("%d%d",&X,&Y);
    if(X==1){
        T=Y*4.00;
        printf("Total: R$ %0.2lf\n",T);
    }
    else if(X==2){
        T=Y*4.50;
        printf("Total: R$ %0.2lf\n",T);
    }
    else if(X==3){
        T=Y*5.00;
        printf("Total: R$ %0.2lf\n",T);
    }
    else if(X==4){
        T=Y*2.00;
        printf("Total: R$ %0.2lf\n",T);
    }
    else if(X==5){
        T=Y*1.50;
        printf("Total: R$ %0.2lf\n",T);
    }
    return 0;
}
