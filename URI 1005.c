#include <stdio.h>
int main()
{
    double A,B,MEDIA;
    scanf("%lf%lf",&A,&B);
    if(A>=0 && A<=10 && B>=0 && B<=10)
    MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5lf\n",MEDIA);
    return 0;
}
