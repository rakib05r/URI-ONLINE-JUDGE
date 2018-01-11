#include <stdio.h>
int main()
{
    int N,X,a,b,c=0,count=0;
    scanf("%d",&N);
    for(a=1;a<=N;a++){
        scanf("%d",&X);
        if(X>=10 && X<=20){
            count++;
        }
        else{
            c++;
        }
    }
    printf("%d in\n%d out\n",count,c);
    return 0;
}
