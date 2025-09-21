#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class StrType {
    char *p;
    int len;

public:
    // Constructor
    StrType(const char *ptr) {
        len = strlen(ptr);
        p = (char*)malloc(len + 1);
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, ptr);
    }

    // Copy constructor (deep copy)
    StrType(const StrType &s) {
        len = s.len;
        p = (char*)malloc(len + 1);
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, s.p);
    }

    // Assignment operator (deep copy)
    StrType& operator=(const StrType &s) {
        if (this == &s) return *this; // self-assignment check
        free(p);                      // free old memory
        len = s.len;
        p = (char*)malloc(len + 1);
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, s.p);
        return *this;
    }

    // Destructor
    ~StrType() {
        cout << "Freeing p\n";
        free(p);
    }

    // Show function
    void show() {
        cout << p << " - length: " << len << "\n";
    }
};

int main() {
    StrType s1("This is a test."), s2("I like C++");

    s1.show();
    s2.show();

    // Assign s1 to s2 safely
    s2 = s1;

    s1.show();
    s2.show();

    return 0;
}
