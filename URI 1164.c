#include <stdio.h>
int main()
{
    int n,sum=0,x,y,z,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
        scanf("%d",&x);
        for(b=1;b<x;b++)
            if(x%b==0)
                sum=sum+b;
                if(sum==x){
                    printf("Y\n");
                }
                else{
                    printf("N\n");
                }
    return 0;
}
