#include <stdio.h>
int main()
{
    int X,Y,a,sum=0,temp;
    scanf("%d%d",&X,&Y);
    if(X>Y){
        temp=Y;
        Y=X;
        X=temp;
    }
    for(a=X;a<=Y;a++){
        if(a%13!=0){
            sum=sum+a;
        }
    }
    printf("%d\n",sum);
    return 0;
}
