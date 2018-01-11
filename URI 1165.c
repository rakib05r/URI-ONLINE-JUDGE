#include <stdio.h>
int main()
{
    int a,b,c,N;
    scanf("%d",&N);
    for(a=1;a<=N;a++){
        scanf("%d",&b);
        for(c=2;c<b;c++){
            if(b%c==0){
                printf("%d nah eo primo\n",b);
                break;
            }
            else{
                printf("%d eh Primo\n",b);
                break;
            }
        }
    }
    return 0;
}
