#include <iostream>
#include <cstdlib>

using namespace std;

class DynamicInt {
private:

    int *ptr;

public:

    DynamicInt(int value) {
        ptr = (int *)malloc(sizeof(int));
        if (!ptr) {
            cout << "Allocation failure\n";
            exit(1);
        }
        *ptr = value;
    }

    ~DynamicInt() {
        free(ptr);
        cout << "Freeing memory\n";
    }

    int getValue() { return *ptr; }
};

int negativeValue(DynamicInt numObj) {
    return -numObj.getValue();
}

int main() {

    DynamicInt num1(-10);
    cout << num1.getValue() << "\n";
    cout << negativeValue(num1) << "\n";

    DynamicInt num2(20);
    cout << num2.getValue() << "\n";
    cout << negativeValue(num2) << "\n";

    cout << num1.getValue() << "\n";
    cout << negativeValue(num1) << "\n";

    return 0;
}
