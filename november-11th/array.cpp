#include <iostream>
using namespace std;

int main()
{
    int marks[] = {15,
                   52,
                   78,
                   68,
                   88,
                   63,
                   75,
                   90};
    int length = sizeof(marks) / sizeof(marks[0]);
    int item = 10;
    int j = length - 1;
    int temp = 0;
    j = j - 1;

    for (int i = 0; i < length; i++)
    {
        marks[i] = temp;
        temp = marks[i + 1];
    }

    cout << "Elements of the array are: " << endl;

    for (int j = 0; j < length; j++)
    {
        cout << marks[j] << endl;
    }
    return 0;
}