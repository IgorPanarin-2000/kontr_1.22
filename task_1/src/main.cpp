
#include "../include/CComplexVector.hpp"
#include "../include/test.hpp"

#define VECTOR_PROJECTION_X 10.
#define VECTOR_PROJECTION_Y 5.

int main ()
{
//  CComplexVector_t CComplexVector (VECTOR_PROJECTION_X, VECTOR_PROJECTION_Y);
//  CComplexVector.print_vector ();
//  CComplexVector.print_polar ();
//  CComplexVector.print_exp ();

  CComplexVector_t a (1, 1), b (2, 2);

  CComplexVector_t c = a + b;

  c.print_vector ();
  b.print_vector ();
  a.print_vector ();

  CComplexVector_test ();

  return 0;
}
