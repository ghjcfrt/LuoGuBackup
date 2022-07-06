#include <stdio.h>
int main()
{
    int a,b,c=0,d,e;
    int i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        d=i;
        while(d>0)
        {
            e=d%10;
            d=d / 10;
            if(e==b)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
