#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random card value
int drawCard() {
    return rand() % 10; // Values from 0 to 9 (including)
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    char choice;
    int handValue = 0;

    cout << "Welcome to Lucky 9 Game!" << endl;

    do {
        int card = drawCard();
        handValue += card;

        cout << "You drew a card with value: " << card << endl;
        cout << "Your current hand value is: " << handValue << endl;

        if (handValue == 9) {
            cout << "Congratulations! You got a Lucky 9!" << endl;
            break;
        } else if (handValue > 9) {
            cout << "Oops! Your hand value exceeded 9. Game over!" << endl;
            break;
        }

        cout << "Do you want to draw another card? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing Lucky 9 Game!" << endl;

    return 0;
}