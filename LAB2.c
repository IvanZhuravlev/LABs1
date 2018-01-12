#include<stdio.h>
#include<math.h> 
 int main()
{
int x,y,z;
double S;
const float k=3.3;
printf("Enter values for the variables\n");
scanf("%d%d%d",&x,&y,&z); 
S=(x*y*z-k*(fabs(x+pow(y,1/4))))/pow(10,7);
printf("%lf\n",S);
return 0;
}


