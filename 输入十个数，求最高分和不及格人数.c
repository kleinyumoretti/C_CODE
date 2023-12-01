#include <stdio.h>

int MAX(int arr[])

{

 int i=0;

 int max=arr[0];

 for(i=1;i<10;i++)

 {

 if(max<arr[i])

 max=arr[i];

 }

 return max;

}



int LIM(int arr[])

{

 int i=0;

 int count=0;

 for(i=0;i<10;i++)

 {

 if(arr[i]<60)

 count++; 

 }

 return count;

}

int main()

{

 int j;

 int max,lim;

 int arr[10];

 for(j=0;j<10;j++)

 {

 scanf("%d",&arr[j]);

 }

 max=MAX(arr);

 printf("%d\n",max);

 lim=LIM(arr);

 printf("%d\n",lim);

 return 0;

}
