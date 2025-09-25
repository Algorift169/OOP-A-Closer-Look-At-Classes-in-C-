#include <iostream>
using namespace std;

// Basic class syntax in C++
class Sample {
private:
    int data;             // private data member

public:
    // Constructor
    Sample(int d) : data(d) {}

    // Setter
    void setData(int d) {
        data = d;
    }

    // Getter
    int getData() const {
        return data;
    }

    // Member function
    void display() const {
        cout << "Data = " << data << endl;
    }
};

int main() {
    // Creating object
    Sample obj(10);

    // Using member functions
    obj.display();
    obj.setData(20);
    cout << "Updated value: " << obj.getData() << endl;

    return 0;
}
