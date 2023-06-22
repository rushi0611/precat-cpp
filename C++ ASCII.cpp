#include <iostream>
using namespace std;
int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int asciiValue = ch;

    cout << "ASCII value of " << ch << " is " << asciiValue << std::endl;

    return 0;
}
