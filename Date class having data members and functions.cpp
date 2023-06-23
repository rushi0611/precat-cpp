#include <iostream>
#include <vector>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Function to accept date
    void acceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    // Function to display date
    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of dates: ";
    cin >> n;

    vector<Date> dates;

    for (int i = 0; i < n; i++) {
        cout << "Enter details for date " << i + 1 << ":" << endl;
        int day, month, year;
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
        dates.push_back(Date(day, month, year));
    }

    cout << endl << "Entered dates:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Date " << i + 1 << ": ";
        dates[i].displayDate();
    }

    return 0;
}

