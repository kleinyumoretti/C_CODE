#include <math.h>

#include <stdio.h>

int pb(float a,float b,float c)

 {

         if(a+b>c && a+c>b && b+c>a)

              return 1;

       else

              return 0;

}

double area(float a,float b,float c )

{

         double p;

         p=(a+b+c)/2;

         return sqrt(p*(p-a)*(p-b)*(p-c));

}

int main()

{

       float a,b,c;

       scanf("%f,%f,%f",&a,&b,&c);

       if(pb(a,b,c))

                 printf("area=%.2f\n",area(a,b,c));

       else

                 printf("input error!\n");

        return 0 ;

}
