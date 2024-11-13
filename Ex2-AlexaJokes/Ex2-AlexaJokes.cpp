#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int getJoke() {

     string joke;
     int randomJoke = 0;
     int lineNum = 0;
     
     ifstream inputFile("randomJokes.txt"); // opens the randomJokes text file
     if (inputFile.is_open()) { // check if the file actually opened

          randomJoke = 1 + (rand() % 38);

          while(getline(inputFile, joke)) {
               ++lineNum;

               if(lineNum == randomJoke) {
                    cout << joke;
               }
          }
          inputFile.close(); // closes randomJokes.txt after use
     } else {
          cout << "Unable to open requested file" << endl;
     }
}

int main() {

    srand(time(0)); // generate the 'seed' for random number generation

    bool nowExit;
     do { // start of the Do While which repeats the program based on user input
          nowExit = false; // (re)sets nowExit to False on program (re)start

          getJoke(); // calls 'getJoke' function to run here

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

} while (nowExit);

     return 0;
}
