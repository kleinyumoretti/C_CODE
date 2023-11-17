#include <stdio.h>

int main()

{

int data1,data2;

char op;

float ans;

scanf("%d%c%d",&data1,&op,&data2);

switch(op)

{

case '+':

ans=data1+data2;

printf("%.2f",ans);

break;

case '-':

ans=data1-data2;

printf("%.2f",ans);

break;

case '*':

ans=data1*data2;

printf("%.2f",ans);

break;

case '/':if(data2!=0)

	{	printf("%.2f",(float)data1/data2);break;}
		
		if(data2==0)
		
	{	printf("Error\n");break;}

dafault:
	
	printf("Error\n");
}

return 0;

}
