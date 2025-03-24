#include<iostream>
using namespace std;
 
// Display the AP up to "n" terms a1 = 4 and d = 3
// AP is 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61
int main() {
    int n ;

    cout << "Enter the number of terms: ";
    cin >> n;
  int firstTerm = 4;
    int commonDifference = 3;
    for (int i = 1; i <= n; i++) {
        cout << firstTerm + (i - 1) * commonDifference << endl;
    }
    return 0;
}