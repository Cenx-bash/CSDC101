#include <iostream> // Needed for input/output

using namespace std;

int main() {
    // Declare a variable to store the first number
    int number;

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> number;

    // Display the number entered
    cout << "The number you entered is: " << number << endl;

    // Declare variables for addition
    int num1, num2, sum;

    // Ask the user for the first number to add
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user for the second number to add
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    cout << "The sum of the numbers is: " << sum << endl;

    // End of the program
    return 0;
}
