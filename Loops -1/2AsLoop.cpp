#include<iostream>
using namespace std;
 
// print all  number 1 to 100 divivisbly by 3

int main() {
    
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}