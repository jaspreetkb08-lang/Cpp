// // STRONG NUMBER//

// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }

// int main() {
//     int num, temp, digit, sum = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     temp = num;

//     while (temp > 0) {
//         digit = temp % 10;          // get last digit
//         sum = sum + factorial(digit);
//         temp = temp / 10;           // remove last digit
//     }

//     if (sum == num)
//         cout << num << " is a Strong number";
//     else
//         cout << num << " is not a Strong number";

//     return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is NOT an Armstrong number";

    return 0;
}
