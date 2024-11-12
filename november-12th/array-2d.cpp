#include <iostream>
using namespace std;

int main()
{
  // int arr[3][4] = {
  //     {10, 11, 12, 13},
  //     {14, 15, 16, 17},
  //     {18, 19, 20, 21}};

  int arr[][5] = {
      12, 14,
      15, 18};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Element at [2][1] is: " << arr[2][1] << endl;
  return 0;
}