#include <iostream>
using namespace std;

int main() {
    char ch = 'A'; // Start with 'A'
    while (ch <= 'Z') { // Loop until 'Z'
        cout << "Character: " << ch << " ASCII Value: " << int(ch) << endl;
        ch++; // Move to the next character
    }
    return 0;
}