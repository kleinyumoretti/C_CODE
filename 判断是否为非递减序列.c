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

   printf("随意输入N个整数,判断是否非递减序列：");

   for(i=0;i<N;i++)

      scanf("%d",&a[i]);

   f=dec(a,N);

   for(i=0;i<N;i++)

        printf("%d ",a[i]);

   if(f==1)

        printf("是非递减序列！\n");

   else

      printf("不是非递减序列！！！\n");

   return 0;

}

