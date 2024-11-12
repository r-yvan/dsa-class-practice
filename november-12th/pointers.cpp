#include <iostream>
using namespace std;

int main()
{
  int sum, i;
  int a[5] = {10, 20, 30, 40, 50};
  for (sum = *a, i = 1; i < 5; i++)
  {
    sum += *(a + i);
  }
  cout << "Sum of array elements is: " << sum << endl;
  return 0;
}