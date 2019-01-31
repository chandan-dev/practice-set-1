#include<stdio.h>
#include<conio.h>
int sum(int num)
{
	if(num % 3 == 0)
	{
		if(num % 5 == 0)
		{
		return multiple_sum(num);
		}
		
	}//check multiple of 3 & 5 or not.
	else
	return 0;	
		
}
int multiple_sum(int num)
{
	int i, sum = 0;
	for(i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;	
		}
	} 
	return sum;
}
int main(int arg1,char *arg2[])
{
	int num;
	printf("Enter a  number");
	scanf("%d", &num);
	int sum_total = sum(num);
	printf("Sum of the factors of %d = %d", num, sum_total);
	
}

