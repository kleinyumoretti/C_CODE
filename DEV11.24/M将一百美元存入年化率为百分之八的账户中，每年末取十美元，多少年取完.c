#include <stdio.h>
int main()
{
	float m=100.0;
	int year=0;
	do{
		m=m+m*0.08;
		m-=100;
		year++;
	}while(m>9);
	printf("%d years the money will be withdrawn");
	return 0;
}
