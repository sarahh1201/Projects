#include <iostream>
#include <ctime>
using namespace std; 

void clear() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void printWelcomeMessage() {
    cout << "Welcome to the Guess a Number Game!" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "0. Exit" << endl;
}

int main(){
    srand(time(0));
    int choice;
    int numberToGuess;
    int userGuess;
    int count = 0;
    printWelcomeMessage();
    cin >> choice;
    clear();

    switch (choice) {
        case 1: 
            cout << "You chose Easy mode!" << endl;
            cout << "Guess a number between 0 and 10." << endl;
            numberToGuess = rand() % 11; // Random number between 0-10
            break;
        case 2:
            cout << "You chose Medium mode!" << endl;
            cout << "Guess a number between 0 and 100." << endl;
            numberToGuess = rand() % 101; // Random number between 0-100
            break;
        case 3:
            cout << "You chose Hard mode!" << endl;
            cout << "Guess a number between 0 and 1000." << endl;
            numberToGuess = rand() % 1001; // Random number between 0-1000
            break;
        case 0:
            cout << "Exiting the game..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Exiting the game..." << endl;
            return 1;
    }

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        }
        count++;
    } while (userGuess != numberToGuess);

    clear(); 
    cout << "Congratulations! \nYou guessed the number. It was " << numberToGuess << "! \nIt took you " << count << " tries." << endl;
    return 0;
} 