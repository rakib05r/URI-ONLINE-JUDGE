#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int X,Y,a;
    scanf("%d%d",&X,&Y);
    for(a=X;a<Y;a++){
        if(a%5==0){
            printf("%d\n%d\n",a+2,a+3);
        }
    }
    return 0;
}
