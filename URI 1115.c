#include <stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
        if(a>0 && b>0){
            printf("primeiro\n");
        }
        else if(a<0 && b>0){
            printf("segundo\n");
        }
        else if(a>0 && b<0){
            printf("quarto\n");
        }
        else if(a==0 || b==0){
            return 0;
        }
        else{
            printf("terceiro\n");
        }
    return 0;
}
