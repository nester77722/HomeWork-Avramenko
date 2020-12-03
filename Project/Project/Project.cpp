#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    setlocale(0, "");
    Rational rational1(5, 3), rational2(4,0);
    
    cout << "Rational 1 = ";
    rational1.Show();

    cout << "Rational 2 = ";
    rational2.Show();

    Rational result = rational1 / rational2;
    
    cout << "Rational 1 / Rational 2 = ";
    result.Show();

    return 0;
}