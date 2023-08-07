#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int inputInt;
    double inputDouble;
    string inputString;
    // Read and save an integer, double, and String to your variables.
    cin >> inputInt;
    cin >> inputDouble;
    cin.ignore();
    getline(cin, inputString);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << i + inputInt << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << inputDouble + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + inputString << endl;
    return 0;
}