// Task 1
#include <iostream>

int main() {
    int punjabPopulation = 1000000;
    int sindhPopulation = 900000;
    int kpkPopulation = 700000;
    int balochistanPopulation = 500000;
    
    int choice;

    std::cout << "Select a province to see its population:" << std::endl;
    std::cout << "1. Punjab" << std::endl;
    std::cout << "2. Sindh" << std::endl;
    std::cout << "3. KPK" << std::endl;
    std::cout << "4. Balochistan" << std::endl;

    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Punjab's population is " << punjabPopulation << std::endl;
            break;
        case 2:
            std::cout << "Sindh's population is " << sindhPopulation << std::endl;
            break;
        case 3:
            std::cout << "KPK's population is " << kpkPopulation << std::endl;
            break;
        case 4:
            std::cout << "Balochistan's population is " << balochistanPopulation << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}

// Task 2

#include <iostream>

int main() {
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            std::cout << "The character is a vowel." << std::endl;
            break;
        default:
            std::cout << "The character is a consonant." << std::endl;
    }

    return 0;
}

// Task 3
#include <iostream>

int main() {
    double num;
    
    // Prompt the user to enter a number
    std::cout << "Please enter a number: ";
    std::cin >> num;

    // Check whether the number is positive, negative, or zero using a switch-case statement
    int result;
    if (num > 0) {
        result = 1;  // Positive
    } else if (num < 0) {
        result = -1; // Negative
    } else {
        result = 0;  // Zero
    }

    // Display the result using a switch-case statement
    switch (result) {
        case 1:
            std::cout << "The number is positive." << std::endl;
            break;
        case -1:
            std::cout << "The number is negative." << std::endl;
            break;
        case 0:
            std::cout << "The number is zero." << std::endl;
            break;
        default:
            std::cout << "Invalid input." << std::endl;
            break;
    }

    return 0;
}

// Task 4
#include <iostream>

int main() {
    int age;

    std::cout << "Enter the person's age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "Invalid age entered." << std::endl;
    } else if (age >= 18) {
        std::cout << "This person is an adult." << std::endl;
    } else if (age >= 13) {
        std::cout << "This person is a teenager." << std::endl;
    } else {
        std::cout << "This person is a child." << std::endl;
    }

    return 0;
}

// Task 5
#include <iostream>

int main() {
    double num1, num2, num3;

    // Input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    double max;  // Variable to store the maximum number

    // Nested if-else statements to find the greatest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 >= num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    std::cout << "The greatest number is: " << max << std::endl;

    return 0;
}

// Task 6
#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // Input
    cout << "Enter a single alphabet: ";
    cin >> ch;

    // Check if the input is a lowercase vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a lowercase vowel." << endl;
    }
    // Check if the input is an uppercase vowel
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is an uppercase vowel." << endl;
    }
    // Check if the input is a lowercase consonant
    else if ((ch >= 'a' && ch <= 'z') && (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')) {
        cout << ch << " is a lowercase consonant." << endl;
    }
    // Check if the input is an uppercase consonant
    else if ((ch >= 'A' && ch <= 'Z') && (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')) {
        cout << ch << " is an uppercase consonant." << endl;
    }
    else {
        cout << "Invalid input. Please enter a single alphabet." << endl;
    }

    return 0;
}



