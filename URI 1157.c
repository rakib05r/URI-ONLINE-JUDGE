#include <stdio.h>
int main()
{
    int N,b;
    scanf("%d",&N);
    for(b=1;b<=N;b++){
        if(N%b==0){
            printf("%d\n",b);
        }
    }
    return 0;
}
