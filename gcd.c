#include<stdio.h>
int main()
{
	int m,n,rem;
	printf("enter value of m and n \n");
	scanf("%d %d",&m,&n);
	while(n!=0)
	{
		rem=m%n;
		m=n;
		n=rem;
	}
	printf("gcd=%d \n",m);
}
