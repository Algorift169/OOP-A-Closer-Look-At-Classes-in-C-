#include <iostream>

using namespace std;

class ClassB; // forward declaration

class ClassA {
private:

    int value1, value2;

public:

    ClassA(int v1, int v2) { value1 = v1; value2 = v2; }

    ClassA(const ClassB &obj);

    void show() { cout << "ClassA: value1=" << value1 << " value2=" << value2 << "\n"; }
};

class ClassB {
    int num1, num2;

public:
    ClassB(int n1, int n2) { num1 = n1; num2 = n2; }

    int getNum1() const { return num1; }
    int getNum2() const { return num2; }
};

ClassA::ClassA(const ClassB &obj) {
    value1 = obj.getNum1();
    value2 = obj.getNum2();
}

int main() {

    ClassA objA(10, 20);
    ClassB objB(0, 0);

    objA = ClassA(objB); // convert objB to ClassA and assign
    objA.show();

    return 0;
}
