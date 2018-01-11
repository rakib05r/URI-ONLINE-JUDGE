#include <stdio.h>
int main()
{
    double s=1;
    int i;
    for(i=2;i<=100;i++){
        s=s+1/(double)i;
    }
    printf("%0.2lf\n",s);
    return 0;
}
