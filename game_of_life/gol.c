
#include <sys/ioctl.h>
#include <stdio.h>

int Screen_getSize(int * x, int * y)
{
   struct winsize ws;
   int ret;

   ret = ioctl(0, TIOCGWINSZ, &ws);

   *y = ws.ws_row;
   *x = ws.ws_col;

   return ret;
}

int Screen_gotoxy(int x, int y)
{
   return printf("%c[%d;%df",0x1B,y,x);
}

int Screen_print(char * msg)
{
   printf("%s", msg);
   fflush(stdout);
}

int Screen_cls(void)
{
   int maxx;
   int maxy;
   int x;
   int y;
   int ret;

   Screen_getSize(&maxx, &maxy);

   for(x=0; x<maxx; x++)
   {
      for(y=0 ;y<maxy; y++)
      {
         Screen_gotoxy(x,y);
         Screen_print(" ");
      }
   }

   return 1;
}

int main(void)
{
   int x, y;
   Screen_cls();

   while(1) {
      usleep(1000);
   }
}
