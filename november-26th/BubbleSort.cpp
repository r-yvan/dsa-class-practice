#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int check = 0;
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    if (check == 0)
      return;
  }
}

int main()
{
  int n = 10;
  int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  bubbleSort(arr, n);
  for (int index = 0; index < n; index++)
  {
    cout << arr[index] << " ";
  }
  return 0;
}
