#include <iostream>
using namespace std;

class Fraction {
public:
    Fraction(int num = 0, int denom = 0) : num(num), denom(denom) {}

    int quotient() {
        if (denom == 0) {
            throw "Cannot divide by zero.";
        }
        return num / denom;
    }

private:
    int num;
    int denom;
};

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    Fraction f1(n1, n2);

    try {
        cout << f1.quotient() << endl;
        cout << "End of try block" << endl;
    }
    catch (const char* ex) {
        cout << "Exception of type char* caught: " << ex << endl;
    }
    cout << "End of program" << endl;

    return 0;
}