#include<iostream>
using namespace std;
#include<math.h>
int main (){
    // Display the GP up to 'n ' terms a =3 and r=4
// formul of Gp is a*r^(n-1)
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int firstTerm = 3;
    int commonRatio = 4;
    for (int i = 1; i <=n; i++)
    {
        //using formula of Gp
        cout << firstTerm * pow(commonRatio, i-1) << endl;
    }
    


    return 0;
}