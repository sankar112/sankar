#include <stdio.h>
 
 int main()
{
   int n=121, reverse=0,temp;
 
   temp = n;
 
   while (temp != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp    = temp/10;
   }
 
   if (n == reverse)
      printf("yes");
   else
      printf("no");
 
   return 0;
}
