#include <iostream>

int returnSumOfDigits(int num)
{
  if (num / 10 == 0)
    return num;
  return num % 10 + returnSumOfDigits(num / 10);
}
int main()
{
  int result = returnSumOfDigits(9);
  std::cout << result << std::endl;
  return 0;
}