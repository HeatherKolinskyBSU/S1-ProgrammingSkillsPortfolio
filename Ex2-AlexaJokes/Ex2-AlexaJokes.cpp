#include <iostream>
#include <string>
#include <fstream> // allows for file handling stuff
using namespace std;

int jokes() {
     string jokeStart; // creates a variable that the user can input into
    cin >> jokeStart; // immediately pause the program for user input

     while (jokeStart == "alexa, tell me a joke") {
          //
     }
}

int main() {

    bool nowExit;
     do { // start of the Do While which repeats the program based on user input
          nowExit = false; // (re)sets nowExit to False on program (re)start

          jokes();

          char runAgain;
          cout << endl
               << " Would you like to hear another joke?" << "\n"
               << "(Input 'Y' or 'y')" << endl;
          cin >> runAgain;

          if (runAgain == 'Y' || runAgain == 'y') {
               nowExit = true;
          // checks user input to determine whether or not to exit the 'Do While' loop
          } else {
               cout << "Exiting program..." << endl;
          }

}while (nowExit);
// the other end of Do While

     return 0;
}
