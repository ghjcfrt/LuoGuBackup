#include<stdio.h>
int main()
{
	int b = 1;
	double a, c, d = 2, e = 2;
	scanf("%lf", &a);
	if (a < 2) 
  {
		printf("%d", 1);
	}
	else while (c < a)
	{
	    d = d * 0.98;
		c = e + d;
		e = c;
		b++;
	}
	printf("%d", b);
	return 0;
}
