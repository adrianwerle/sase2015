int ThisIsAVariableWithAVeryVeryLongName_________1 = 0;
  /*1234567890123456789012345678901234567890 */
  /*         1         2         3           */

int ThisIsAVariableWithAVeryVeryLongName_________2 = 0;
  /*1234567890123456789012345678901234567890 */
  /*         1         2         3           */

void foo(unsigned char len);

void foo(unsigned char len) {
   int array[len];

   (void)array;
}

int main(void)
{
   unsigned char array<:10:>;

   /* this variable is not used */
   (void)array;


   for(int i = 0; i < 100; i++) {   /* only allowed in c99 */
   }

   {
      int i = 0;                    /* allowed in c90 and c99 */
      for (; i < 100; i++) {

      }
   }

   return 0;
}
