#include <stdio.h>
int main()
{
int i,j,n,s,t;
printf ("Enter number of rows");
scanf ("%d",&n);

t=n-1;
for (i=1;i<=n;i++)
{
 for (s=1;s<=t;s++)
 {
   printf (" ");
 } 
 for (j=1;j<=(2*i-1);j++)
 {
   printf ("*");
   }
   
   t--;
   printf ("\n");
 
 }
return 0;
}
