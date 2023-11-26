#include <stdio.h>
int main()
{
	float input;
	printf("Please enter a float number\n");
	scanf("%f",&input);
	printf("The input is %.1f or %.1e \n",input,input);
	return 0;
	
}
