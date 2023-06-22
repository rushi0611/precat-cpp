#include <iostream>
using namespace std;
int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];

   cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int sum = 0;
    int maxNum = numbers[0];
    int minNum = numbers[0];

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];

        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }

        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }

    double average = static_cast<double>(sum) / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    return 0;
}

