// #include <iostream>
// using namespace std;
// class Car
// {
// public:
// string brand;
// int year;
// void show()
// {
// cout << "Brand: " << brand << endl;
// cout << "Year: " << year << endl;
// }
// };
// int main()
// {
// Car c1;
// c1.brand = "Toyota";
// c1.year = 2022;
// c1.show();
// return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// class Car
// {
// private:
//     string brand;
//     int year;

// public:
//     void setData(string b, int y) {
//         brand = b;
//         year = y;
//     }

//     void Show() {
//         cout << "Brand: " << brand << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// int main()
// {
//     Car c1;
//     c1.setData("Toyota", 2022);  // use public function
//     c1.Show();                   // correct case
//     return 0;
// }

#include <iostream>
using namespace std;
class Employee
{
public:
int id;
float salary;
void display()
{
cout << "ID: " << id << endl;
cout << "Salary: " << salary << endl;
}
};
int main()
{
Employee e1, e2;
e1.id = 101;
e1.salary = 30000;
e2.id = 102;
e2.salary = 40000;
e1.display();
e2.display();
return 0;
}
