#include <iostream>

using namespace std;

#define SIZE 10

class CharStack {
    char stck[SIZE];
    int topIndex;

public:
    // Constructor
    CharStack() : topIndex(0) {
        cout << "Constructing a stack\n";
    }

    // Push a character (inline)
    void push(char ch) {
        if (topIndex == SIZE) {
            cout << "Stack is full\n";
            return;
        }
        stck[topIndex++] = ch;
    }

    // Pop a character (inline)
    char pop() {
        if (topIndex == 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        return stck[--topIndex];
    }
};

int main() {

    CharStack s1, s2;

    // Push characters onto s1
    s1.push('a');
    s1.push('b');
    s1.push('c');

    // Clone s1 into s2
    s2 = s1;

    // Pop from s1
    for (int i = 0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << "\n";

    // Pop from s2
    for (int i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << "\n";

    return 0;
}
