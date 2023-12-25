#include<stdio.h>
void main()
{ 
int units,rate,bill;
printf("enter unit consumed\n");
scanf("%d",&units);
if(units<=100)
{ rate=4;
}
else if(units>100 && units<=200)
{ rate=5;
}
else if(units>200 && units<=400)
{ rate=6;
}
else if(units>400 && units<=600)
{ rate=7;
}
else 
{ rate=9;
}
 printf("rate=%d",rate);
 bill= units*rate;
 printf("\nbill amount=%d",bill);
 }

