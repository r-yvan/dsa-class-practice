#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  for (int i = 0; i < 1000; i++)
  {
    for (int j = 0; j < 1000; j++)
    {
      count++;
      cout << "i = " << i << " j = " << j << endl;
    }
  }
  cout << "Total number of iterations: " << count << endl;
  return 0;
}