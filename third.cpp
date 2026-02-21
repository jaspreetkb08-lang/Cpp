#include <iostream>
using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter first integer: ";
//     cin >> a;
//     cout << "Enter second integer: ";
//     cin >> b;
//     cout << "Enter third integer: ";
//     cin >> c;

//     int greatest = std::max(a, std::max(b, c));

//     cout << "Greatest: " << greatest << endl;

//     return 0;
// }

/// stings///

// int main() {
//     string s1 = "Hello";
//     string s2 = "World";
//     string s3 ;

//     // concatenation using + 
//     s3 =s1 + " " + s2;
//     cout << "Concatenated string :" << s3 << endl;
    
//     // Append using += 
//     s1 += s2;
//     cout << "after += operator :" << s1 << endl;
    

//     // comparion using== 
//     if (s1 == s2) {
//         cout << "string are equal" << endl;
//     } else{ 
//         cout << "String are not Equal " << endl;

//     }

//     // Comparison using < 
//     if (s1 < s2) {
//         cout << s1 << " comes before " << s2 << endl;
//     } else {
//         cout << s1 << " comes after" << s2 << endl;
    
//     }

// }


/// Boolean Value 
//Simple boolean Value Example 

// int main(){ 
//     bool a = true;
//     bool b = false;
//     cout << "Value of a :" << a << endl;
//     cout << "Value of b :" << b << endl;
//     return 0;
// }


// /// IF ELSE 
//  int main(){
//     int marks;
//     cout<< "enter marks: ";
//     cin >> marks;
//     if (marks >= 90){
//         cout << " Grade  A";
    
//     }
//     else if (marks >= 75){
//         cout << "Grade B";
//     } 
//     else if ( marks >= 50){ 
//         cout << "Grade C";
//     }
//     else {
//         cout << "Fail";
//     }
//     return 0;

//  }

// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }
//     return 0;
// }

int main() {
    int day ;
    cout << " Enter day number (1-7):";
    cin >> day ;
     switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid day";
    }
}


