#include <stdio.h>
int main()
{
    int a,b,N;
    scanf("%d",&N);
    if(N>1 && N<1000)
    for(a=1;a<=N;a++){
        printf("%d %d %d\n",a,a*a,a*a*a);
        printf("%d %d %d\n",a,a*a+1,a*a*a+1);
    }
    return 0;
}
