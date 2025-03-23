#include<iostream>
using namespace std;
int main() {
    // GP series 1, 2, 4, 8, 16, 32, ...
    // Print n terms of GP series with common ratio 2
    int n;
    cout << "Enter the number of terms you want to print in the GP: ";
    cin >> n;

    int term = 1; // First term of the GP
    for (int i = 0; i < n; i++) {
        cout << term << endl;
        term *= 2; // Multiply by the common ratio (2)
    }

    return 0;
}