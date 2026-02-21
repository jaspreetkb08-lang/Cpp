#include <iostream>
using namespace std;

int main () {
    int a;
    float b;
    double c;
    char d;
    bool e;
    cout << "size of int" << sizeof(a) << "bytes" << endl ;
    cout << "size of float" << sizeof(b) << "bytes" <<endl;
    cout << "size of double" << sizeof(c) << "bytes" << endl;
    cout << "size of char" << sizeof(d) << "bytes" << endl;
    cout << "size of bool" << sizeof(e) << "bytes" << endl;
    
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";

    cin >> a>>b;
    int max = (a > b) ? a : b;

    cout << "Largest number is " << max;

}


int main() {
    int marks;    /// comparing///

    cout << "Enter marks: ";
    cin >> marks;

    string result = (marks >= 40) ? "Pass" : "Fail";
    cout << "Result: " << result;

}

int main() {
    int num;
     cout << "Enter a number: ";
     cin >> num;

     (num % 2 == 0) ? cout << "Even number" : cout << "Odd number";

     return 0;
}


skip one

int main() {
    int a, b;
    if (a > 15 || b > 15)
        cout << "At least one condition is true" << endl;
    else
        cout << "OR condition is false" << endl;

    if (!(a > b))
        cout << "NOT operator is true" << endl;
    
    return 0;

}

int main () {
    int age, marks;
    //Taking input from user
    cout << "Enter your age";
    cin >> age;
    
    cout << " Enter your marks : ";
    cin >> marks;
    /*LOgical AND (&&)
    Both conditions must be true */
    if (age >= 18 && marks >= 40) {
        cout << "Result using And (&&): Eligible and Passed" <<endl;
    }else {
        cout << "Result using AND (&&): Not eliabile or Failed " << endl;
    }
    //logical OR (||) operator
        if (age>=18 || marks>=40){
            cout<<"Result using OR (||): Eligible or Passed"<<endl;
        }
        else{
            cout<<"Result using OR (||): Not Eligible or Failed"<<endl;
        }

        //logical NOT (!) operator
        if (!(age>=18 && marks>=40)){
            cout<<"Result using NOT (!): Not Eligible or Failed"<<endl;
        }
        else{
            cout<<"Result using NOT (!): Eligible and Passed"<<endl;
        }
    }
