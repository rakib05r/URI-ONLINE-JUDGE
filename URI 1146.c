#include <stdio.h>
int main()
{
    int X,Y;
    while(1){
    scanf("%d",&X);
    if(X==0){
        return 0;
    }
    for(Y=1;Y<=X;Y++){
        printf("%d \n",Y);
    }
}
    return 0;
}
