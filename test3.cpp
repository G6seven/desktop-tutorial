#include <iostream>

int main() {
    const int secretNumber = 69;
    int guess;
    int numTries = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "You have 5 tries to guess the secret number." << std::endl;

    while (numTries < 5) {
        std::cout << "Enter your guess: ";

        // Input validation
        while (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number: ";
        }

        numTries++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the secret number." << std::endl;
            std::cout << "You took " << numTries << " tries." << std::endl;
            break;
        } else {
            std::cout << "Wrong guess! Try again." << std::endl;
            if (numTries < 5) {
                std::cout << "You have " << 5 - numTries << " tries remaining." << std::endl;
            } else {
                std::cout << "Sorry, you have used all your tries. The secret number was " << secretNumber << "." << std::endl;
            }
        }
    }

    return 0;
}
