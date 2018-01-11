#include <stdio.h>
int main()
{
    int a,b,sum=0,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d%d",&a,&b);
        if(a<b){
            for(j=a;j<b;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        else{
            for(j=b;j<a;j++){
                if(j%2!=0){
                    sum=sum+j;
                }
            }
        }
        printf("%d\n",sum);
    //printf("%d\n",sum);
    return 0;
}
