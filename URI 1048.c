#include <stdio.h>
int main()
{
    double p,as,a,b,c;
    int per;
    scanf("%lf",&p);
    if(p<=400){
        per=15;
        a=(p*per)/100;
        as=p+a;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d%%\n",as,a,per);
    }
    else if(p<=800){
        per=12;
        a=(p*per)/100;
        as=p+a;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %%\n",as,a,per);
    }
    else if(p<=1200.00){
        per=10;
        a=(p*per)/100;
        as=p+a;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d  % %\n",as,a,per);
    }
    else if(p<=2000.00){
        per=7;
        a=(p*per)/100;
        as=p+a;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %%\n",as,a,per);
    }
    else{
        per=4;
        a=(p*per)/100;
        as=p+a;
        printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %%\n",as,a,per);
    }
    return 0;
}
