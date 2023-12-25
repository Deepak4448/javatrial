#include<stdio.h>
#include<math.h>
void main()
{ float a,b,c,s,Area;
printf("enter side a,b and c\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area=%f\n",Area);
}
