#include <iostream>
#include <string>
#include <fstream> // allows for file handling stuff
using namespace std;

int main() {

programStart:
    // PLACEHOLDER
    string jokeStart; // creates a variable that the user can input into
    cin >> jokeStart; // immediately pause the program for user input

     while (jokeStart == "alexa, tell me a joke") {
        std::ifstream myfile ("randomJokes.txt");
    }

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
