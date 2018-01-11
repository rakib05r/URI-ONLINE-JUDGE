#include <stdio.h>
int main()
{
    int a,b,s,h,m;
    scanf("%d",&a);
    h=a/3600;
    b=a%3600;
    m=b/60;
    s=b%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
