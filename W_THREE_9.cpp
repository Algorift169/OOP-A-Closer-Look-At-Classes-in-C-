#include <iostream>
#include <cstring>

using namespace std;

class Text {
private:

    char content[50];

public:
    void show() { cout << content << "\n"; }
    void setContent(const char *str) { strcpy(content, str); }
};

// Return an object of type Text
Text getInput() {
    char temp[50];
    Text textObj;
    cout << "Enter a string: ";
    cin >> temp;
    textObj.setContent(temp);
    return textObj;
}

int main() {
    Text myText;

    // Assign returned object to myText
    myText = getInput();
    myText.show();

    return 0;
}
