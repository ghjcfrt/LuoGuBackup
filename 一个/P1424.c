#include<stdio.h>
int main()
{
    int x, n, a, b, c=0, d, e, f=0;
    scanf("%d %d", &x, &n);
    if(x<=5)
    {
        c = 5 - x + 1;
     a = n - c;
     b = a / 7;
     d = a % 7;
       if(d>2)
       {
           f = d - 2;    
        }
    }
  else if(x>6)
  {
     a = n - 1;
     b = a / 7;
     d = a % 7;
     if(d>6)
     {
         f=d-2;
     }
    else if(d>5)
     {
         f=d-1;
     }
    else
    {
         f=d;
     }
    }
  else if(x>5)
  {
     a = n - 2;
     b = a / 7;
     d = a % 7;
     if(d>6)
     {
         f=d-2;
     }
    else if(d>5)
     {
         f=d-1;
     }
    else
    {
         f=d;
     }
    }
    e = ( 5 * b + c + f ) * 250;
    printf("%d", e);
    return 0;
}
