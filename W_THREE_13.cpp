#include <iostream>

using namespace std;

class PrinterStatus; // forward declaration

class PrinterUser1 {
private:

    bool usingPrinter;

public:

    PrinterUser1(bool status = false) { usingPrinter = status; }

    void startUsing() { usingPrinter = true; }
    void stopUsing() { usingPrinter = false; }

    friend bool inUse(const PrinterUser1 &p1, const class PrinterUser2 &p2);
};

class PrinterUser2 {
    bool usingPrinter;

public:

    PrinterUser2(bool status = false) { usingPrinter = status; }

    void startUsing() { usingPrinter = true; }
    void stopUsing() { usingPrinter = false; }

    friend bool inUse(const PrinterUser1 &p1, const PrinterUser2 &p2);
};

bool inUse(const PrinterUser1 &p1, const PrinterUser2 &p2) {
    return p1.usingPrinter || p2.usingPrinter;
}

int main() {

    PrinterUser1 userA;
    PrinterUser2 userB;

    cout << "Initially, is printer in use? " << (inUse(userA, userB) ? "Yes" : "No") << "\n";

    userA.startUsing();
    cout << "After userA starts, is printer in use? " << (inUse(userA, userB) ? "Yes" : "No") << "\n";

    userB.startUsing();
    cout << "After userB starts, is printer in use? " << (inUse(userA, userB) ? "Yes" : "No") << "\n";

    userA.stopUsing();
    cout << "After userA stops, is printer in use? " << (inUse(userA, userB) ? "Yes" : "No") << "\n";

    userB.stopUsing();
    cout << "After userB stops, is printer in use? " << (inUse(userA, userB) ? "Yes" : "No") << "\n";

    return 0;
}
