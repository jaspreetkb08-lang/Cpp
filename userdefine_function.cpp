#include <iostream>
#include <cmath> // for sqrt(), pow()
#include <cstring> // for strlen()
using namespace std;

// non-void functions
int add(int a, int b) {
    return a + b;
}

// void function
void greet() {
    cout<< "Welcome to C++ Function\n";
}

//Boolan Returns Function
bool isEven(int n) {
    return (n % 2 == 0);
}

void callByValue(int x ) 
{
    x = 100;
    cout << "inside call by value: " << x << endl;
}

void callByReference(int &x)
{
    x = 200;
}
void callByPointer(int *x)
{
    
}
int main()
{
    cout << "\n====== CALL BY VALUE ====== \n";
    int a = 10;
    callByValue(a);
    cout << "After Call By Value : " << a << endl;
    cout << "\n ===== CAll by reference ===== \n";
    int b = 20;
    callByReference(b);
    cout << "after call by reference: " << b << endl;

    cout << "\n=== CALL BY POINTER ===\n";
}


//------------------------------------------------------//
//Functionn without argument and without returns value //
//------------------------------------------------------//
#include <iostream>
using namespace std;
void display (){
    cout << "Welcome to c++ function!" << endl;
}
int main(){
    display(); // Function call 
    return 0;
}

//----------------------------//
//program:calculate functorial//
//----------------------------//
#include <iostream>
using namespace std;
int factorial (int n) {
    int fact = 1 ;
    for (int i = 1; i <=n; i++)
    fact*=i;
    return fact;
}

int main () {
    int num ;
    cout << "enter number: ";
    cin >> num;
    cout << "Factorial = " << factorial(num) <<
endl;
    return 0;
}

//--------//
//reverse//
//--------//
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;   
        rev = rev * 10 + digit;
        n = n / 10;            
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Reverse = " << reverseNumber(num) << endl;
    return 0;
}

//------------------//-----//
//Recursive Function//
//program:Fibonacci series//
//------------------------//
# include <iostream>
using namespace std;
int fibonacci (int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}

//--------------------//
//program:find maximum//
//--------------------//
#include <iostream>
using namespace std;
inline int maximum (int a, int b){
    return (a>b)? a:b;
}

int main() {
    cout <<"Max = " << maximum(10,20) << endl;
    return 0;
}

//--------------------//
//Function Overloading//
//program: add integers and floats
//--------------------//
#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
float add (float a, float b) {
    return a+b;
}

//--------------------//
#include <iostream>
using namespace std;

int main() {
    int choice;
    float r, b, h, l, w, s;
    const float PI = 3.14;

    cout << "AREA CALCULATOR\n";
    cout << "1. Circle\n";
    cout << "2. Triangle\n";
    cout << "3. Rectangle\n";
    cout << "4. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle = " << PI * r * r;
            break;

        case 2:
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area of Triangle = " << 0.5 * b * h;
            break;

        case 3:
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area of Rectangle = " << l * w;
            break;

        case 4:
            cout << "Enter side: ";
            cin >> s;
            cout << "Area of Square = " << s * s;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
