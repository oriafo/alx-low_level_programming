#include <stdio.h>


int main(void)
{

	int i = 0;
	
	unsigned sum1=0;
	long sum2=0;
	int sum=0;
	
	while(i <= 1024){
		if ((i%3) == 0){
			sum1 = sum1 + i;
			i++;
		}
		else if((i%5) == 0){
			sum2 = sum2 + i;
			i++;
		}
	}
	sum = sum1 + sum2;
	printf("%d\n", sum);
	return (0);
}
