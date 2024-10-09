#include <iostream>
using namespace std;
namespace userDefined
{
    int insideNamespace = 0;
    int cout()
    {
        return insideNamespace;
    }
}

int myGlobal = 1;
int cout()
{
    return myGlobal * myGlobal;
}
int main()
{
    int cout = 2;
    for (;;)
    {
        std::cout << "The local variable cout in main is " << cout << std::endl;
        std::cout << "The variable in userDefined is " << userDefined::cout() << std::endl;
        std::cout << "The output of cout() in userDefined is " << ::cout() << std::endl;
        std::cout << "The value of myGlobal is " << userDefined::insideNamespace << std::endl;
        std::cout << "The output of global cout() is " << ::cout() << std::endl;
    }
    return 0;
}
