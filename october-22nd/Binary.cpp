#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 181;

    cout << ++a << endl;
    cout << a << endl; 
    cout << oct << a << endl;
    cout << hex << a << endl;

    cout << setprecision(2) << fixed << 1234.234556789 << endl;
    cout << setprecision(3) << scientific << 1234.234556789 << endl;
    return 0;
}