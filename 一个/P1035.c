#include<stdio.h>
int main()
{
    int k,n=1;
    scanf("%d",&k);
    double Sn=0;
    while(Sn<=k)
    {
        Sn=1.0/n+Sn;
        n++;
    }
    printf("%d",n-1);
    return 0;
}
