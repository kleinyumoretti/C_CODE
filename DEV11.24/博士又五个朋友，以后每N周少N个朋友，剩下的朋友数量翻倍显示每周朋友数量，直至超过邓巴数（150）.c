#include <stdio.h>
int main()
{
	int frd=5;
	int week=1;
	while(frd<150)
	{
		printf("At %d weeks,he has %d friends\n",week,frd);
		frd=2*(frd-week);
		week++;
	}
	return 0;
}
