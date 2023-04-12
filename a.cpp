#include <stdio.h>
int main()
{
    int i, j, k;
    int a=0;
    int  s=1;
    printf ("输出 %d \n",a  );
    printf("可能分配情况如下：\n");
    for( i=0; i <= 100; i++ )
        for( j=0; j <= 100; j++ )
            for( k=0; k <= 100; k++ )
            {
                if( 5*i+3*j+k/5==100 && k%5==0 && i+j+k==100 )
                {
                    printf("公鸡 %2d 只，母鸡 %2d 只，小鸡 %2d 只\n", i, j, k);
                }
            }
    return 0;
}
int a (int a)
{
    if (a>0)
        return 1;
    return 0;
}
