
#include <sys/ioctl.h>
#include <stdio.h>
#include "screen.h"

int main(void)
{
   int x, y;
   Screen_cls();

   while(1) {
      usleep(1000);
   }
}
