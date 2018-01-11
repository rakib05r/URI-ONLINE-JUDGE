#include <stdio.h>
int main()
{
    int N,a;
    scanf("%d",&N);
    if(N>2 && N<1000){
        for(a=1;a<=10;a++){
            printf("%d x %d = %d\n",a,N,a*N);
        }
    }
    return 0;
}
