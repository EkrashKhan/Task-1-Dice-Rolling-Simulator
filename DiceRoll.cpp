#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Setting a starting point for the random number generator once using current time

    int count = 0;    // To count how many times the dice were rolled
    char c;           // To store user choice (y/n)
    int roll;         

    cout << "---- Welcome to Dice Roll Simulator ----" << endl;

    // Start the main rolling loop
    do {
        cout << "How many dice would you like to roll? "<<endl;
        cin >> roll;

        cout << "Rolling " << roll << " dice..." << endl;

        int total = 0;  // Reset total for each roll session

        // Roll each die and show the result
        for (int i = 1; i <= roll; i++) {
            int result = rand() % 6 + 1;  // Random number between 1 and 6
            cout << "Dice " << i << " : " << result << endl;
            total += result;  // Add result to total
        }

        
        cout << "The total of all dice is: " << total << endl;

        count++;  // Increment roll count

        // Ask user whether to roll again
        cout << "Do you want to roll again? (y/n): "<<endl;
        cin >> c;

    } while (c == 'y' || c == 'Y');  // Repeat if user enters 'y' or 'Y'

    // Final message 
    cout << "\nYou rolled the dice " << count << " times. Thanks for playing!" << endl;

    return 0;
}
