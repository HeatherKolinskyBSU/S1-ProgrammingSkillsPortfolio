#include <iostream>
#include <string>
using namespace std;

int displayMenu()
     {
          int menuOption;
          cout << "  Maths Quiz" << "\n"
               << "--------------" << "\n"
               << "[Easy]     - 1" << "\n"
               << "[Moderate] - 2" << "\n"
               << "[Advanced] - 3" << "\n"
               << "Choose a difficulty level:" << endl;
          cin >> menuOption;
          // asks for user input and waits to receive one
          return menuOption;
     }

int main() {

     srand(time(0)); // generate the 'seed' for random number generation
     // declared here so that it remains main variables
     bool nowExit = false;
     do {
     int menuOption = displayMenu(); // ensures the user's choice is reset on program start
                         // declared here so that menuOption remains a global variable
     

     int displayResults = 0; // resets the user's score each time the program is run
     // declared here so that they remain global variables

     void displayProblem();
     {
          int UserInput; // lets the user input a guess to the program
          int TotalQuestions = 0; // ensures program only prints required number of questions
                                  // resets on program start

          switch (menuOption)
          {
          case 1:
          {
               while (TotalQuestions != 10)
               {
                    int IsCorrect = 0; // stores how many guesses the user has used on a question

                    int a = 1 + (rand() % 9);
                    int b = 1 + (rand() % 9);
                    // creates two random numbers to use for random questions

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
                    // waits for user input

                    if (UserInput == 'a << operationSign << b') {
                          cout << "Correct!" << "\n"
                          << endl;
                          displayResults = displayResults + 10;
                          // succeeding a question first time yields double points
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
                    int IsCorrect = 0; // stores how many guesses the user has used on a question

                    int a = 1 + (rand() % 99);
                    int b = 1 + (rand() % 99);
                    // creates two random numbers to use for random questions

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
                    // waits for user input
               }
          }

          case 3:
          {
               while (TotalQuestions != 10)
               {
                    int IsCorrect = 0; // stores how many guesses the user has used on a question

                    int a = 1 + (rand() % 9999);
                    int b = 1 + (rand() % 9999);
                    // creates two random numbers to use for random questions

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
                    // waits for user input
               }

          }
     }
     }

     void score();
     {
          string resultsGrade;

          switch (resultsGrade){
               case (displayResults >89){
                    resultsGrade = "A+";
                    break();
               }

               case (displayResults >79){
                    resultsGrade = "A";
                    break();
               }

               case (displayResults >69){
                    resultsGrade = "B";
                    break();
               }

               case (displayResults >59){
                    resultsGrade = "C";
                    break();
               }

               case (displayResults >49){
                    resultsGrade = "D";
                    break();
               }

               case (displayResults >39){
                    resultsGrade = "E";
                    break();
               }

               case (displayResults <40){
                    resultsGrade = "F";
                    break();
               }
               // switch statement to determine the user's 'grade' depending on how many points they scored
               // base pass mark is 40%
          }
          cout << "Congratulations! You got: " << displayResults << " points!" << "\n"
               << "Grade: " << resultsGrade << "\n"
     }

     {
          char runAgain;
          cout << endl
               << " Would you like to run another test? [Y/N]" << "\n"
               << "(Any input other than 'Y' or 'y' exits the program)" << endl;
          cin >> runAgain;
          // asks for user input then waits for response

          while (runAgain == 'Y' || runAgain == 'y') {
               nowExit = true;
          // uses goto the run the program again without exiting it entirely 
          // goto sucks but the program is small enough for me to probably get away with it
          }
          
          cout << "Exiting program..." << endl;
          // while loop checks if the user wants to re-run the program
          // if not, program ends
     }
}while (!nowExit)

     return 0;
}
