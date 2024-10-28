#include <iostream>

void printer(int x)
{
  if (x == 0)
    return;
  printer(x - 1);
  std::cout << x << std::endl;
}

int main()
{
  printer(10);
  return 0;
}