#include <iostream>
#include <stdio.h>

int power(int base, int exponent)
{
  int result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }
  return result;
}
int main()
{
  int result = power(10, 0);
  std::cout << "The result is: " << result << std::endl;
  return 0;
}