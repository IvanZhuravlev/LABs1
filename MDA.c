#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define vert 10
#define horiz 7
 int main() 
{ 	
int a, cols,i, j,m,imin,jmin,min;
	int **massive1 = NULL;	
int **massive2 = NULL;	
int **massive3 = NULL; 
int k[10]; 
int glass1[4]; 
int glass2[4]; 	
massive1 = (int **)malloc(horiz * sizeof(int *));	
for (i = 0; i < horiz; i++)	
{		
massive1[i] = (int *)malloc(vert * sizeof(int));
	} 	
srand(time(NULL));			/* for random */ 	
printf("\n Make some massives \n\n"); 	
for (i = 0; i < horiz; i++)	
{ for (j = 0; j < vert; j++)		
{			
massive1[i][j] = rand() % 10000; 			
printf("%d ", massive1[i][j]);		
} 
printf("\n\n");	
}	
printf("This was started Massiv");
	printf("\n\n"); 	
m=vert/2;
 for(j = 0;j < m;j++) /*overturn 1 row*/ 
{ 
glass1[4]=massive1[0][j]; 
massive1[0][j]=massive1[0][vert-1-j]; 
massive1[0][vert-1-j]=glass1[4];
 } 
for(j = 0;j < m;j++) /*overturn 2 row*/ 
{ 
glass2[4]=massive1[6][j]; 
massive1[6][j]=massive1[6][vert-1-j]; 
massive1[6][vert-1-j]=glass2[4]; 
}
 for(j = 0;j < vert;j++) /*change 1 and 6 row*/ 
{ 
k[10]= massive1[0][j]; 
massive1[0][j] = massive1[6][j]; 
massive1[6][j] = k[10];
 } 
for(i=0;i<horiz;i++)
 {
 for(j=0;j<vert;j++)
 { 
printf("%d ", massive1[i][j]); 
} 
printf("\n\n"); 
} 
printf("This was changed matrix");
 printf("\n\n");
min=massive1[1,1]; 
imin=1; 
jmin=1; 
{
for (i=1;i<horiz;i++) 
 for (j=1;j<vert;massive1[i,j]<min;j++) 
 { 
 min=massive1[i,j]; 
 imin=i; 
 jmin=j; 
 } 
printf ("Min element =",min," v ",imin," stroke, ",jmin," stolbze"); 
printf ("Novyj massiv\n"); 
for (i=imin;i<horiz;i++) 
 for (j=1;j<vert;j++) 
 massive1[i,j]=massiv1[i+1,j]; 
for (i=1;i<horiz;i++) 
 for(j=jmin;j<vert;j++) 
 massive1[i,j]=massive1[i,j+1]; 
for (i=1;i<(horiz-1);i++) 
 { 
 for(j=1;j<(vert-1);j++) 
 printf("ITOG\n",massive1[i,j]:3); 
 }
}
