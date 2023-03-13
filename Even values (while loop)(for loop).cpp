//printing Even nos i/p form user

//using while loop
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("\n");
	printf("All even numbers up to %d are\n\n",n);
	i=2;
	while (i<=n)
	{
		printf("%d ",i);
		i=i+2;
	}
}

//using For loop
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("\nAll even numbers up to %d are.\n\n",n);
	i = 2;
	for (i=2; i<=n; i=i+2)
		printf("%d ",i);
}
