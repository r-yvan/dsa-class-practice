#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
  int a = 23;
  int b = 56;
  int hypo = sqrt(pow(a, 2) + pow(b, 2));
  std::cout << hypo << std::endl;
  return 0;
}