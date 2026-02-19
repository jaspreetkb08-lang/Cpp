#include <iostream>
using namespace std;

int main () {
    int n;
    cout<< "Enter number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}




int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << ch << " is a vowel.";
            break;
        default:
            cout << ch << " is not a vowel.";
    }
    return 0;
}



int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


int main(){
    int x;
    cout <<  "enter the number: ";
    cin>> x;
    for (int i=1;i<=x; i++){        // rows
        for(int j=1;j <=i;j++){     //columns
            cout<<i;
        }
        cout <<endl;        // new line
    }
    return 0;
}



int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


int main() {
    int n ;
    cout <<  "enter the number: ";
     cin>> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



int main() {
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;

        for (int x = 2; x * x <= x;x ++) {
            if (i % x == 0) {     //% check the reminder as is should be 0 if 0 so the number is not a prime number
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
        ch++;   // move to next alphabet
    }

    return 0;
}
