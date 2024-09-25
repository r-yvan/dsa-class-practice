#include <iostream>
#include <stdio.h>
#include <string.h>

int addTwoNums(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}

int addTwoNums(int num1, int num2, int num3)
{
  int sum = num1 + num2 + num3;
  return sum;
}

int returnDiff(int array[])
{
  int sumOfEven = 0;
  int sumOfOdd = 0;
  int i = 0;
  int diff = 0;
  for (i = 0; i < 8; i++)
  {
    if (array[i] % 2 == 0)
    {
      sumOfEven = sumOfEven + array[i];
    }
    else
    {
      sumOfOdd = sumOfOdd + array[i];
    }
  }
  diff = sumOfEven - sumOfOdd;
  return diff;
}

int main()
{
  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int result = returnDiff(arr);
  std::cout << "Difference: " << result << std::endl;

  int res = addTwoNums(1, 34);
  std::cout << "Sum: " << res << std::endl;
  
  int re = addTwoNums(1, 34, 96);
  std::cout << "Sum: " << re << std::endl;
  
  return 0;
}
