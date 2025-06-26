#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool hasMinLength(const string& password, int minLength) {
    return password.length() >= minLength;
}
bool hasUpperCase(const string& password) {
    for (char c : password) {
        if (isupper(c)) return true;
    }
    return false;
}
bool hasLowerCase(const string& password) {
    for (char c : password) {
        if (islower(c)) return true;
    }
    return false;
}
bool hasDigit(const string& password) {
    for (char c : password) {
        if (isdigit(c)) return true;
    }
    return false;
}
bool hasSpecialChar(const string& password) {
    for (char c : password) {
        if (ispunct(c)) return true;
    }
    return false;
}
int main() {
    cout << "Here is our secure password checker!" << endl<< endl;
    string password;
    cout << "Please enter your password: ";
    cin >> password;
    
    int strength = 0;
    if (hasMinLength(password, 8)) {
        strength++;
    }
    if (hasUpperCase(password)) {
        strength++;
    }
    if (hasLowerCase(password)) {
        strength++;
    }
    if (hasDigit(password)) {
        strength++;
    }
    if (hasSpecialChar(password)) {
        strength++;
    }
    cout << "Password strength: " << strength << "/5" << endl<< endl;

    if(strength < 3) {
        cout << "Your password is weak. Please consider improving it." << endl<< endl;
    } else if (strength == 3 || strength == 4) {
        cout << "Your password is moderate. It could be improved further." << endl<< endl;
    }
    else  {
        cout << "Your password is strong!" << endl<< endl;
    }
    cout << "Thank you for using our secure password checker!" << endl;
    return 0;
}
// This code checks the strength of a password based on various criteria and provides feedback to the user
// It uses functions to check for minimum length, presence of uppercase letters, lowercase letters, digits
// and special characters, and calculates a strength score based on these criteria
// The program is designed to be user-friendly and provides clear instructions and feedback
// It is written in C++14 standard and uses standard libraries for input/output and character handling
// The code is structured to be modular, with each check encapsulated in its own function for clarity and reusability
// The program is efficient and straightforward, ensuring that it meets the requirements
// for a secure password checker while being easy to understand and maintain