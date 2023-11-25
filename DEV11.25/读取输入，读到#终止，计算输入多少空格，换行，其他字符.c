#include <stdio.h>
int main()
{
	char ch;
	int blank=0;
	int endline=0;
	int otherworld=0;
	while((ch=getchar())!='#')
	{
		if(ch==' ')
			blank++;
		else if(ch=='\n')
			endline++;
		else
			otherworld++;
	}
	printf("blank is %d\nendline is %d\notherworld is %d\n",blank,endline,otherworld);
	return 0;
}
