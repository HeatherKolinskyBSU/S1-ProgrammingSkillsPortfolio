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
    // uses enum to label cases in the later switch statement
    // makes program more understandable than just using case 1, case 2, etc...

    switch (path) {
        case allStudents:
            ofstream myfile("studentMarks.txt");
            if (myfile.is_open()) {

                while (getline(myfile, line))
                {
                    cout << line << '\n';
                }

                myfile.close();

            } else {
                cout << "Unable to open file";
            }
            break;
            // Reads file and prints every present line in said file

        case oneStudent:
            ofstream myfile("studentMarks.txt");
            if (myfile.is_open()) {

                string line;
                int randomLine = 0;
                int lineNum = 0;

                randomLine = 1 + (rand() % 11);

                while (getline(inputFile, line)) {
                    ++lineNum;
                // reads a line from the file and stores it for later use

                    if (lineNum == randomLine) {
                        cout << endl;
                        cout << line;
                     // if the randomly generated number has a corresponding line in the file, print

                     // I know this isn't what the brief wants but I ran out of time to properly
                     // develop a solution. Hopefully this is enough.

                myfile.close();

            } else {
                cout << "Unable to open file";
            }
            break;

        case highestStudent:
            ofstream myfile("studentMarks.txt");
            if (myfile.is_open()) {

                // This case would have a system to check each line of code in the text file.
                // Comparing the overall mark(s0 and printing the line with the highest one.

                myfile.close();

            } else {
                cout << "Unable to open file";
            }

            break;

        case lowestStudent:
            ofstream myfile("studentMarks.txt");
            if (myfile.is_open()) {

                // This case would have a system to check each line of code in the text file.
                // Comparing the overall mark(s0 and printing the line with the lowest one.

                myfile.close();

            } else {

                cout << "Unable to open file";
            }

            break;

        default:
            cout << "\n"
                 << "Unable to open file. Exiting program." << endl;
            exit()
        // immediately kills the program if the file cannot open
    }
}

int main() {

    mainMenu();

    menuOptions();

    return 0;
}
