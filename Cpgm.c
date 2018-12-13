#include <stdio.h>

int main()
{
   int x = 12;
   
   int p = 5;
   
   printf("Bit value = %d\n",x&(1<<3)); // Check bit set or not
  // int val = ~(1<<3);
   
  // printf("Final value = %d\n",(x&(~(1<<2)))); // reset the bit to zero 
}
