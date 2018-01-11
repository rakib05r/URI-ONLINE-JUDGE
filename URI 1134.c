#include <stdio.h>
int main()
{
    int a,b=0,c=0,d=0;
    while(1){
        scanf("%d",&a);
        if(a==1){
                b++;
            printf("Alcol: %d\n",b);
        }
        else if(a==2){
                c++;
            printf("Gasolina: %d\n",c);
        }
        else if(a==3){
            d++;
            printf("Diesel: %d\n",d);
        }
        else if(a==4){
            return 0;
        }
        else{
            printf("MUITO OBRIGADO\n");
        }
    }
    return 0;
}
