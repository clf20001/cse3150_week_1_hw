#include <iostream>
#include "math_utils.h"
#include "advanced_math.h"

using std::cin, std::cout, std::endl;

int main() {
    cout << "Enter your first number: ";

    int n1;
    cin >> n1;

    cout << "Enter your second number: ";

    int n2;
    cin >> n2;

    cout << n1 << " + " << n2 << " is " << MathUtils::add(n1, n2) << "." << endl;

    cout << n1 << " * " << n2 << " is " << MathUtils::multiply(n1, n2) << "." << endl;

    cout << n1 << "^2 is " << AdvancedMath::square(n1) << "." << endl;
    cout << n2 << "^2 is " << AdvancedMath::square(n2) << "." << endl;
}
