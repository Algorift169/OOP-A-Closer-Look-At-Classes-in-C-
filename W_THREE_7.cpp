#include <iostream>

using namespace std;

class Number {
private:

    int value;

public:

    Number(int v) {
        value = v;
        cout << "Constructing Number\n";
    }

    ~Number() {
        cout << "Destructing Number\n";
    }

    int getValue() { return value; }
};

// Return square of numObj.value
int squareValue(Number numObj) {
    return numObj.getValue() * numObj.getValue();
}

int main() {

    Number myNumber(10);

    cout << squareValue(myNumber) << "\n";

    return 0;
}
