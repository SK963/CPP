#include <iostream>
using namespace std;

int main() {
    int age = 15; // You can change the value of 'age' for testing.

    try 
    {
        if (age < 18) 
        {
            throw age; // Throw the 'age' as an exception
        }
    } 
    catch (int myNum) 
    { // Catch the exception as an integer 'myNum'
        cout << "An error occurred: Age is less than 18" << endl;
        cout << "the entered age is: " << myNum << endl; // Output the value of 'age'
    }

    cout << "Rest of the program continues..." << endl;

    // If no error occurs, this code is reached, and the catch block is skipped.
    return 0;
}
