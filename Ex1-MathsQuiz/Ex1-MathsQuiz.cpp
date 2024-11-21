#include <iostream>
#include <string>
using namespace std;

int menuOption;
int displayResults = 0; // ensures the user's score is 0 at program start

int displayMenu() {
          int menuOption;
          cout << "  Maths Quiz" << "\n"
               << "--------------" << "\n"
               << "[Easy]     - 1" << "\n"
               << "[Moderate] - 2" << "\n"
               << "[Advanced] - 3" << "\n"
               << "Choose a difficulty level:" << endl;
          cin >> menuOption;

          return menuOption;
          // takes menuOption so the program can use it's data elsewhere
}

int displayProblem() {
          int UserInput;
          int TotalQuestions = 0;

          switch (menuOption)
          {
          case 1:
          {
               while (TotalQuestions != 10)
               {
                    int IsCorrect = 0; // stores how many guesses the user has used on a question

                    int a = 1 + (rand() % 9);
                    int b = 1 + (rand() % 9);

                    string operationSign;

                    int decideOperation = rand() % 2;
                    // creates a 'coin-flip' to determine if the next question uses '+' or '-'
                    if (decideOperation == 0) {
                          operationSign = '+';
                    }
                    else if (decideOperation == 1) {
                         operationSign = '-';
                    }

                    cout << a << " " << operationSign << " " << b << " = " << endl;
                    cin >> UserInput;

                    if (decideOperation == 0 && UserInput == a + b) {
                          cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                          // succeeding a question first time yields double points

                    } else if (decideOperation == 1 && UserInput == a - b) {
                         cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                    // seperates + and - to check them seperately

                    } else {
                         IsCorrect = IsCorrect + 1;
                         cout << "Oops! Try again" << endl;
                         cin >> UserInput;
                         displayResults = displayResults + 5;
                    }
                    // if the user's input does NOT equal whatever the generated sum was,
                    // the question flags incorrect and gives them another chance

                    TotalQuestions = TotalQuestions + 1;
               }
          }

          case 2:
          {
               while (TotalQuestions != 10)
               {
                    int IsCorrect = 0;

                    int a = 1 + (rand() % 99);
                    int b = 1 + (rand() % 99);

                    string operationSign;

                    int decideOperation = rand() % 2;
                    // creates a 'coin-flip' to determine if the next question uses '+' or '-'
                    if (decideOperation == 0) {
                          operationSign = '+';
                    }
                    else if (decideOperation == 1) {
                         operationSign = '-';
                    }
                    // assigns the output of the coinflip to a character (+/-)

                    cout << a << " " << operationSign << " " << b << " = " << endl;
                    cin >> UserInput;

                    if (decideOperation == 0 && UserInput == a + b) {
                          cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                          // succeeding a question first time yields double points

                    } else if (decideOperation == 1 && UserInput == a - b) {
                         cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                    // seperates + and - to check them seperately

                    } else {
                         IsCorrect = IsCorrect + 1;
                         cout << "Oops! Try again" << endl;
                         cin >> UserInput;
                         displayResults = displayResults + 5;
                    }
                         // if the user's input does NOT equal whatever the generated sum was,
                         // the question flags incorrect and gives them another chance

                    TotalQuestions = TotalQuestions + 1;
               }
          }

          case 3:
          {
               while (TotalQuestions != 10)
               {
                    int IsCorrect = 0;

                    int a = 1 + (rand() % 9999);
                    int b = 1 + (rand() % 9999);

                    string operationSign;

                    int decideOperation = rand() % 2;
                    // creates a 'coin-flip' to determine if the next question uses '+' or '-'
                    if (decideOperation == 0) {
                          operationSign = '+';
                    }
                    else if (decideOperation == 1) {
                         operationSign = '-';
                    }
                    // assigns the output of the coinflip to a character (+/-)

                    cout << a << " " << operationSign << " " << b << " = " << endl;
                    cin >> UserInput;

                    if (decideOperation == 0 && UserInput == a + b) {
                          cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                          // succeeding a question first time yields double points

                    } else if (decideOperation == 1 && UserInput == a - b) {
                         cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                    // seperates + and - to check them seperately

                    } else {
                         IsCorrect = IsCorrect + 1;
                         cout << "Oops! Try again" << endl;
                         cin >> UserInput;
                         displayResults = displayResults + 5;
                    }
                         // if the user's input does NOT equal whatever the generated sum was,
                         // the question flags incorrect and gives them another chance

                    TotalQuestions = TotalQuestions + 1;
               }
          }

          }

          return displayResults;
}

void score()
     {
          string resultsGrade;

          if (displayResults > 89) {
               resultsGrade = "A+";

          } else if (displayResults > 79) {
               resultsGrade = "A";

          } else if (displayResults > 69) {
               resultsGrade = "B";
               
          } else if (displayResults > 59) {
               resultsGrade = "C";
               
          } else if (displayResults > 49) {
               resultsGrade = "D";

          } else if (displayResults > 39) {
               resultsGrade = "E";

          } else if (displayResults < 40) {
               resultsGrade = "F";
          }
          // if-else statement to determine the user's 'grade' depending on how many points they scored

          cout << "Congratulations! You got: " << displayResults << " points!" << "\n"
               << "Grade: " << resultsGrade << "\n";
     }
     // Chose to keep score as a void as we don't actually need to pass any information out of it

int main() {

     srand(time(0)); // generate the 'seed' for random number generation

     bool nowExit;
     do { // start of the Do While which repeats the program based on user input
          nowExit = false; // (re)sets nowExit to False on program (re)start

          displayResults = 0; // resets the user's score each time the program is run

          menuOption = displayMenu();

          displayResults = displayProblem();

          score(); // calls 'score' to be run here

          char runAgain;
          cout << endl
               << " Would you like to run another test? [Y/N]" << "\n"
               << "(Any input other than 'Y' or 'y' exits the program)" << endl;
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
