#include<stdio.h>

int main()

{
	int i=3; 
   int rabbit=1,rabbits=1,month;

   scanf("%d",&month);

   if (month == 1 || month == 2)

       printf("%d\n",rabbit);

   else

       {

           for(i = 3;i <= month;i++)

           {

              rabbits=rabbit+rabbits;

              rabbit=rabbits-rabbit;

           }

            printf("%d\n",rabbits);

       }

   return 0;

}
