#include <stdio.h>

/* a 128 bits lenght integer value */
__int128 int128bits;

/* decimal and normal floats */
_Decimal128 dcmFloat;
long double stdFloat;

void main(void)
{
   int128bits = 128;

   printf("sizeof(int128bits): %d\n", (int)sizeof(int128bits));

   dcmFloat = 340.1DF;
   stdFloat = 340.1DF;

   printf("Sizeof Decimal Float: %d\n        Sizeof Float: %d\n", (int)sizeof(dcmFloat), (int)sizeof(stdFloat));
   printf("Decimal Float: %20.40lf\n        Float: %20.40lf\n", (double)dcmFloat, (double)stdFloat);

   dcmFloat *= 0.1234DF;
   stdFloat *= 0.1234F;

   printf("Decimal Float: %20.40lf\n        Float: %20.40lf\n", (double)dcmFloat, (double)stdFloat);
}
