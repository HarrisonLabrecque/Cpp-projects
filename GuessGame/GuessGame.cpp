#include <iostream>
#include <cstdlib>
#include <ctime>  // Needed for time()

using namespace std;

int main() {

    int guess = 0;
    int randomNumber;
    bool playAgain = true;
    int count;
    string option = " ";

    srand(time(0)); // Seed random number generator

    cout << "Welcome to the number guessing game." << endl;
    cout << "Guess a number from 0 to 50." << endl;

    do {
        randomNumber = rand() % 51;
        count = 0;

        while (count < 5) {

            cout << "Enter a number from 0 to 50: ";
            cin >> guess;

            if (guess > randomNumber) {
                cout << "Too high" << endl;
            } else if (guess < randomNumber) {
                cout << "Too low" << endl;
            } else {
                cout << "That is the correct number!" << endl;
                break;  // Exit the loop early if correct
            }

            count++;
        }

        if (count == 5 && guess != randomNumber) {
            cout << "The correct number was " << randomNumber << "." << endl;
        }

        cout << "Would you like to play again? (Y/N): ";
        cin >> option;

        if (option == "N" || option == "n") {
            playAgain = false;
        }

    } while (playAgain);

    return 0;
}
