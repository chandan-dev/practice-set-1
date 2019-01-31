#include<stdio.h>
#include<conio.h>
int sum(int limit)
{
	int i, sum = 0;
	for(i = 3; i <= limit; i++)
	{
	
		if(i % 3 == 0)
		{
			if(i % 5 == 0)
			{
			 sum = sum + i;  
			}
		}
			
	}//Gives all the multiple of 3&5 upto the given limit.
	return sum;			
}
 
int main(int arg1,char *arg2[])
{
	int limit;
	printf("Enter multiples upto  : ");
	scanf("%d", &limit);
	int sum_total = sum(limit);
	printf("Sum of the factors of 3 & 5 upto %d = %d", limit, sum_total);
	
}

