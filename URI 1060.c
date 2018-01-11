#include <stdio.h>
int main()
{
    int a,b,count=0;
    for(a=1;a<=6;a++){
        scanf("%d",&b);
        if(a>0){
            count++;
        }
        printf("%d\n",count);
    }
    //printf("%d\n",c);
    return 0;
}
