#include <iostream>
using namespace std;

//declaring the function
int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        int lastDigit = num % 10;   //logic of th code
        reversedNum = (reversedNum * 10) + lastDigit;
        int remainingNumber = num / 10;
        return reverseNumber(remainingNumber, reversedNum);
    }
}

//invoking main function
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

//calling the function
    int reversedNum = reverseNumber(num, 0);

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}

