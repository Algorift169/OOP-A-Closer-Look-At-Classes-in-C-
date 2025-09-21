#include <iostream>

using namespace std;

class Number {
private:

    int value;

public:

    Number(int v) { value = v; }
    void setValue(int v) { value = v; }
    int getValue() { return value; }
};

void squareCopy(Number numObj) {
    numObj.setValue(numObj.getValue() * numObj.getValue());
    cout << "Copy of number has value: " << numObj.getValue() << "\n";
}

int main() {

    Number originalNum(10);

    squareCopy(originalNum); // passed by value
    cout << "But, original number is unchanged in main: ";
    cout << originalNum.getValue() << "\n";

    return 0;
}
