#include <iostream>
#include <string>
using namespace std;

int main (){
     programStart: 
     int menuOption = 0; // ensures the user's choice is reset on program start
                         // declared here so that menuOption remains a global variable
     void displayMenu();{
         cout << "Maths Quiz" << "\n"
              << "----------" << "\n"
              << "[Easy]         - 1" << "\n"
              << "[Intermediate] - 2" << "\n"
              << "[Hard]         - 3" << "\n"
              << "Choose a difficulty level:" << endl;
         cin >> menuOption;
         // asks for user input and waits to receive one
    }

    switch (menuOption) {
        case 1: {
          // PLACEHOLDER
        }

        case 2: {
          // PLACEHOLDER
        }

        case 3: {
          // PLACEHOLDER
        }
    }

    char runAgain;
    cout << endl
         << " Would you like to run another test? [Y/N]\n"
         << "(Any input other than 'Y' or 'y' exits the program)" << endl;
    cin >> runAgain;
    // asks for user input then waits for response

    while (runAgain == 'Y' || runAgain == 'y') {
        goto programStart;
        // goto sucks but the program is small enough for me to get away with it
    }
    cout << "Exiting program..." << endl;
    // while loop checks if the user wants to re-run the program
    // if not, program ends

     return 0;
}
