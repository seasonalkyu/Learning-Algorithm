#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a = 1.2345'6789;
    cout << a << endl;

    cout.precision(7);
    cout << a << endl;
}