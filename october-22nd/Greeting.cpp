#include <iostream>
using namespace std;

int main()
{
    int age;
    string firstName, lastName;
    getline(cin, firstName);
    getline(cin, lastName);
    cin >> age;
    cout << "Hello " << firstName << " " << lastName << ", " << "You are " << age << " old!!" << endl;
    return 0;
}