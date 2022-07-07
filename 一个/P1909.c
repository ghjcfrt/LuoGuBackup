#include <stdio.h>
int main()
{
   int a,b,c,d,e,f,g,h,i,j,k;
   scanf("%d",&a);
   scanf("%d %d",&b,&c);
   scanf("%d %d",&d,&e);
   scanf("%d %d",&f,&g);
   h=a/b;b=a%b==0?h:h+1;h=b*c;
   i=a/d;d=a%d==0?i:i+1;i=d*e;
   j=a/f;f=a%f==0?j:j+1;j=f*g;
   if(h<i&&h<j)k=h;
   if(i<h&&i<j)k=i;
   if(j<i&&j<h)k=j;
   printf("%d\n",k);
   return 0;
}
