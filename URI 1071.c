#include <stdio.h>
int main()
{
    int a,b,c,sum=0;
    scanf("%d%d",&a,&b);
    if(a<b){
        for(c=a+1;c<b;c++){
                if(c%2!=0){
            sum=sum+c;
            }
        }
    }
    else{
        for(c=b+1;c<a;c++){
            if(c%2!=0){
                sum=sum+c;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
