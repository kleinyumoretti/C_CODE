#include <stdio.h>
int choice(int i); 
int main()
{
	int i=0;
	int j=0;
	for(i=10;i<=100;i++)
	{
		j=choice(i);
		if(j)
		printf("%-3d",i);
	}
	return 0;
 } 
 int choice(int i)
 {
 	int a,b;
 	if(i%3!=0)
 		return 0;
 	else
	{
 		for(a=1;a<3;a++)
 		{
 			if(i%10==5)
 			return i;
 			b=i/10;
 			if(b%10==5)
 			return i;
	 	}
 	}
  } 
