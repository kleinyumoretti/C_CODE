//����һ�����飬����26��Сд��ĸ��Ȼ���ӡ
#include <stdio.h>
int main()
{
	char arr[26];
	char i;
	int j=0;
	for(i='a';i<'z';i++)
		{
		arr[j]=i;
		j++;
		}
		for(i=0;i<26;i++)
		printf("%c",arr[i]);
		return 0;
 } 
