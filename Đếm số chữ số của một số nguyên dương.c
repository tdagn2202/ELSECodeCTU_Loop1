#include <stdio.h>

int main()
{
	int n,count;
	scanf("%d",&n);
	count =0;
	while (n!=0)
	{
		n = n/10;
		count++;
	}
	printf("Number of digits: %d",count);
}
