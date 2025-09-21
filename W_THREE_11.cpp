#include <iostream>

using namespace std;

class Bad {
private:

    int *ptr;

public:
    Bad() {
        int temp = 10;
        ptr = &temp; // pointer to local stack variable
    }

    int getValue() { return *ptr; }
};

Bad createBadObject() {
    Bad obj;
    return obj; // Returning object with invalid pointer
}

int main() {
    Bad myObj = createBadObject();
    cout << myObj.getValue(); // Undefined behavior!
    return 0;
}
