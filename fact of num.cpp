#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    unsigned long long fact = 1;

    for (int i = 2; i <= num; ++i) {
        fact *= i;
    }
    
    cout << "Factorial of " << num << " is " << fact << endl;

    return 0;
}

