
#include <iostream>
#include <vector>
#include <algorithm>

void printDivisors(int n) {
    std::vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort divisors in decreasing order
    std::sort(divisors.rbegin(), divisors.rend());

    // Print divisors
    for (int divisor : divisors) {
        std::cout << divisor << std::endl;
    }
}

int main() {
    std::cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << std::endl;
    std::cout << "The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer," << std::endl;
    std::cout << "the program will print all the divisors of your integer in a column and in decreasing order." << std::endl;

    while (true) {
        int number;
        std::cout << "Please enter a positive integer: ";
        std::cin >> number;

        // Validate input
        while (number <= 0) {
            std::cout << number << " is not a positive integer." << std::endl;
            std::cout << "Please enter a positive integer: ";
            std::cin >> number;
        }

        // Print divisors
        printDivisors(number);

        // Ask user if they want to continue
        char response;
        std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
        std::cin >> response;

        // Validate the response
        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n') {
            std::cout << "Please respond with Y (or y) for yes and N (or n) for no." << std::endl;
            std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
            std::cin >> response;
        }

        // Exit if the user doesn't want to continue
        if (response == 'N' || response == 'n') {
            break;
        }
    }

    return 0;
}
