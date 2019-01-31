#include<stdio.h>
#include<conio.h>
void main(int arg1, char *arg2)
{
	int num;
	printf("Enter a  number");
	scanf("%d", &num);
	int sum_total = fibonacii(num);
	printf("\n\nSum of the even fibonacii of %d = %d\n", num, sum_total);
}
int fibonacii(int num)
{
	int i, sum = 0, val_1 = 0, val_2 = 1;
	for(i  = 0;i < num; i++)
	{
		printf("%d\t", val_2);
		int next  = val_1 + val_2;
		val_1 = val_2;
		val_2 = next;   // Gives all the fibonacii series.
		if(val_1 % 2 == 0)  //Find the sum of even fibonacii numbers
		{
			sum = sum + val_1;			
		}
	}
	return sum;
}
