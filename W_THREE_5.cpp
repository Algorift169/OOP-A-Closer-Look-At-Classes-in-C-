#include <iostream>

using namespace std;

class Number {
private:

    int value;

public:

    Number(int v) { value = v; }
    int getValue() { return value; }
};

// square of the number
int squareValue(Number numObj) {
    return numObj.getValue() * numObj.getValue();
}

int main() {
    Number num1(10), num2(2);

    cout << squareValue(num1) << "\n";
    cout << squareValue(num2) << "\n";

    return 0;
}
