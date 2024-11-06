#include <iostream>
#include <string>
using namespace std;

int main() {

programStart:
    // PLACEHOLDER

    void runAgain();
     {
          char runAgain;
          cout << endl
               << " Would you like to get another joke? [Y/N]\n"
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
     }

     return 0;
}
