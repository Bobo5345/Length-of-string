#include <iostream>
using namespace std;
int main()
{
    // Declaring variables
    char word[26];

    // Asking user to input the string
    cout << "This code helps you to find how much letters are there in string." << endl;
    cout << "Enter the string: ";
    cin >> word;

    // Finding position of null terminator to find length of string.
    int i = 0;
    while (i < 25 && word[i] != '\0')
    {
        i++;
    }

    // Outputting no:of characters, ie length of word
    cout << "\nThe word have " << i << " letters" << endl;
    return 0;
}