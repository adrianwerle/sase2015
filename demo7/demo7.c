#include <stdint.h>
#include <stdio.h>

typedef struct {
   int16_t el0;
   int8_t el1;
} fooType;


fooType foo = { 0, 0};

_Noreturn void noRetFunction(void);

_Noreturn void noRetFunction(void) {
   while(1);
}

typedef struct {
   _Alignas(8) char el[8];
} array8Type;

typedef struct {
   int16_t matrix[5][5];
} matrix_int16_type;

typedef struct {
   int32_t matrix[5][5];
} matrix_int32_type;

typedef struct {
   float matrix[5][5];
} matrix_float_type;

#define MatrixAdd(type, a, b)                         \
   _Generic((type),                                   \
      matrix_int16_type : MatrixAdd_int16,            \
      matrix_int32_type : MatrixAdd_int32,            \
      matrix_float_type : MatrixAdd_float             \
      )((a),(b))

void MatrixAdd_int16(matrix_int16_type a, matrix_int16_type b);

void MatrixAdd_int32(matrix_int32_type a, matrix_int32_type b);

void MatrixAdd_float(matrix_float_type a, matrix_float_type b);

void MatrixAdd_int16(matrix_int16_type a, matrix_int16_type b)
{
   (void)a;
   (void)b;
}

void MatrixAdd_int32(matrix_int32_type a, matrix_int32_type b)
{
   (void)a;
   (void)b;
}

void MatrixAdd_float(matrix_float_type a, matrix_float_type b)
{
   (void)a;
   (void)b;
}

int main(void)
{
   _Static_assert(sizeof(int) >= 4, "int shall be at least 32-bits");
   printf("Alignment of array8Type: %d\n", (int)_Alignof(array8Type));

   matrix_float_type matrix;

   MatrixAdd(matrix, matrix, matrix);

   return 0;
}
