#include <stdio.h>

#define N 5

int dec(int a[],int n)

{

    if(n==1) return 1;

    if(a[n-2]>a[n-1])

             return 0;

      else

      return dec(a,n-1); 

}

int main( )

{

   int a[N],f,i;

   printf("��������N������,�ж��Ƿ�ǵݼ����У�");

   for(i=0;i<N;i++)

      scanf("%d",&a[i]);

   f=dec(a,N);

   for(i=0;i<N;i++)

        printf("%d ",a[i]);

   if(f==1)

        printf("�Ƿǵݼ����У�\n");

   else

      printf("���Ƿǵݼ����У�����\n");

   return 0;

}

