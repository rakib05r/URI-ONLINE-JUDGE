#include<stdio.h>
main()
{
    int x, i , j, k,loop;
    scanf("%d",&x);
    loop=x*4;
    for(i=1,j=2,k=3; i<=loop; i=i+4,j=j+4,k=k+4){
        printf("%d ",i);
        printf("%d ",j);
        printf("%d ",k);
        printf("PUM");
        printf("\n");
    }
    return 0;
}
