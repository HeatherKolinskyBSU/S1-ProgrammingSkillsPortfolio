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

int main() {

    mainMenu();

    return 0;
}