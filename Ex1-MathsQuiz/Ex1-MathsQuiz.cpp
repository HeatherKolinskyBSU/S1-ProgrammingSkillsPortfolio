#include <iostream>
#include <string>
using namespace std;

int main (){
     int displayMenu();{ // initialises the displayMenu function
                         // which contains the main manu text and input
         int menuOption = 0; // ensures the user's choice is reset on program start
         cout << "Maths Quiz" << "\n"
              << "----------" << "\n"
              << "[Easy]         - 1" << "\n"
              << "[Intermediate] - 2" << "\n"
              << "[Hard]         - 3" << "\n"
              << "Choose a difficulty level:" << endl;
         cin >> menuOption;
         // asks for user input and waits to receive one
    }

     return 0; //return statement
}
