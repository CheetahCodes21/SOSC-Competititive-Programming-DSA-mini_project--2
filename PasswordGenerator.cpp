#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <random>

using namespace std;

int main() {
    cout << "Welcome to Password Generator" << endl;

    int num_letters, num_numbers, num_symbols;
    cout << "How many letters do you want in your password? ";
    cin >> num_letters;

    cout << "How many numbers do you want in your password? ";
    cin >> num_numbers;

    cout << "How many symbols do you want in your password? ";
    cin >> num_symbols;

    string letters_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string letters_lower = "abcdefghijklmnopqrstuvwxyz";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_+-=[]{}|;:',.<>?";

    // Seed the random number generator using time
    mt19937 generator(time(0));

    // Shuffle each category separately
    shuffle(letters_upper.begin(), letters_upper.end(), generator);
    shuffle(letters_lower.begin(), letters_lower.end(), generator);
    shuffle(numbers.begin(), numbers.end(), generator);
    shuffle(symbols.begin(), symbols.end(), generator);

    // Select the desired number of characters from each category
    string password = letters_upper.substr(0, num_letters) +
                      letters_lower.substr(0, num_letters) +
                      numbers.substr(0, num_numbers) +
                      symbols.substr(0, num_symbols);

    // Shuffle the password string to ensure randomness
    shuffle(password.begin(), password.end(), generator);

    // Output the generated password
    cout << "This is your password requirements:😎 " << password << endl;

    return 0;
}

