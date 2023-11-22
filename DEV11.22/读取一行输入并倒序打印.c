  #include <stdio.h>
  int main()
  {
  	char arr[256];
  	int i=0;
  	do
  	{
  		scanf("%c",&arr[i]);
	  }while(arr[i]!='\n'&&(++i));
	for(i--;i>=0;i--)
	{
		printf("%c",arr[i]);
	}
	return 0;
  }
