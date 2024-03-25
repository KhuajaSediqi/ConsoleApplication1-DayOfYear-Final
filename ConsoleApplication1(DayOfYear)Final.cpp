#include <iostream>
#include <string>
using namespace std;

class DayOfYear {
public:
    static const std::string months[12];
    static const int daysInMonth[12];
    int day;

    // Constructor that takes an integer representing the day of the year
    DayOfYear(int dayOfYear) : day(dayOfYear) {}

    // Function to print the day in month-day format
    void print() {
        int monthIndex = 0;
        int dayOfMonth = day;

        // Find the month and day of the month
        while (dayOfMonth > daysInMonth[monthIndex]) {
            dayOfMonth -= daysInMonth[monthIndex];
            monthIndex++;
        }

        std::cout << months[monthIndex] << " " << dayOfMonth << std::endl;
    }

    // Static function to create a DayOfYear object and print the date
    static void printDayOfYear(int dayOfYear) {
        DayOfYear day(dayOfYear);
        day.print();
    }
};

// Static member variable holding string objects for the months
const std::string DayOfYear::months[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

// Static member variable holding the number of days in each month
const int DayOfYear::daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {

    int dayInput;
    cout << "CIS242*** Name: Khuaja Sohrabuddin Sediqi ***CIS242" << endl;
    cout << "CIS242*** Chapter: 14 ***CIS242" << endl;
    cout << "CIS242*** Programming Challenge: 14.2 ***CIS242" << endl;
    cout << "CIS242*** Date Submited : 03/19/2024 ***CIS242" << endl;
    cout << "This program converts a number into a string representing the month and day.\n" << endl;
    std::cout << "Enter a day number between 1 and 365: ";
    std::cin >> dayInput;

    // Check for valid input
    if (dayInput >= 1 && dayInput <= 365) {
        DayOfYear::printDayOfYear(dayInput);
    }
    else {
        std::cout << "Invalid input. Please enter a number between 1 and 365." << std::endl;
    }

    return 0;
}
