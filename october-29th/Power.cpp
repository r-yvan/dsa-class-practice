#include <iostream>

int power(int x, int n)
{
  if (n == 0)
    return 1;
  int smallOutput = power(x, n - 1);
  return x * smallOutput;
}
int main()
{
  std::cout << power(5, 3) << std::endl;
  return 0;
}
