#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void mainMenu() {
    cout << "============================================" << "\n"
         << "                    Menu" << "\n"
         << "============================================" << "\n"
         << "1. View all student records" << "\n"
         << "2. View individual student record" << "\n"
         << "3. Show student with highest total score" << "\n"
         << "4. Show student with lowest total score" << endl;
}

int menuOptions() {
    enum path {
        allStudents = 1,
        oneStudent = 2,
        highestStudent = 3,
        lowestStudent = 4
    };
    cin >> path;

    switch (path) {
        case allStudents:
            // code block
            break;

        case oneStudent:
            // code block
            break;

        case highestStudent:
            // code block
            break;

        case lowestStudent:
            // code block
            break;

        default:
            cout << "\n"
                 << "Unable to open file. Exiting program." << endl;
            exit()
    }
}

int main() {

    mainMenu();

    menuOptions();

    return 0;
}
