#include <stdio.h>
#include "demo5.h"

int sum(int a, int b) {
   return a+b;
}

int main()
{
   char c;
   while (c != 'x');
   {
      c = getchar();
      if (c = 'x')
         return 0;
      switch (c) {
         case '\n':
         case '\r':
            printf("Newline\n");
         default:
            printf("%c", c);
      }
   }
   return 0;
}
