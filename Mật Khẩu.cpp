#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isValidPassword(string password) {
    if (password.length() < 8) return false;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for(int i = 0; i<password.length(); i++) {
        if(password[i] == password[i-1]) {
            return false;
        }
    }

    for (int i = 0; i < password.length(); ++i) {
        char c = password[i];

        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (ispunct(c)) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    // Redirect input and output
    ifstream infile("password.in");
    ofstream outfile("res.out");

    string password;
    while (getline(infile, password)) {
        if (isValidPassword(password)) {
            outfile << "VALID" << endl;
        } else {
            outfile << "INVALID" << endl;
        }
    }

    infile.close();
    outfile.close();
    return 0;
}