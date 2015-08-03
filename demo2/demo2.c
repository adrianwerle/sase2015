void foo(unsigned char array[*]);

void foo(unsigned char* array)
{
   (void)array;
}


int main(void)
{
   unsigned char array[10];

   foo(array);

   return 0;
}
