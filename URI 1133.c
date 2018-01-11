#include <stdio.h>
int main()
{
    int X,Y,a;
    scanf("%d%d",&X,&Y);
    for(a=X;a<Y;a++){
        if(a%5==2 || a%5==3){
            printf("%d\n",a);
        }
    }
    return 0;
}
