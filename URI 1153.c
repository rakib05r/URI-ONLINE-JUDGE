#include <stdio.h>
int main()
{
    int N,b,c=1;
    scanf("%d",&N);
    if(N>0 && N<13)
    for(b=N;b>=1;b--){
            c=c*b;
    }
    printf("%d\n",c);
    return 0;
}
