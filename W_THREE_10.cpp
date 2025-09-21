#include <iostream>

using namespace std;

class Who {
private:

    char id;

public:

    Who(char identifier) {
        id = identifier;
        cout << "Constructing Who #" << id << "\n";
    }

    ~Who() {
        cout << "Destroying Who #" << id << "\n";
    }

    char getId() { return id; }
};


Who makeWho(char identifier) {
    Who tempWho(identifier);
    return tempWho; // returned by value
}

int main() {
    cout << "Creating first object directly:\n";
    Who firstObj('A');

    cout << "\nCreating object returned from function:\n";
    Who secondObj = makeWho('B');

    cout << "\nEnd of main function\n";
    return 0;
}
