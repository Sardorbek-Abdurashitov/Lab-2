#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //problem1

    string name;
    int age;
    cout << " Please, Enter your name: ";
    cin >> name ;
    cout << "OK" ;
    cout << ", Please enter your age" ;
    cin >> age ;
    cout << "Hello " << name << ", you are " << age << " years old." << endl;

//problem2
    for (int i = 1; i <= 5; ++i)
        cout << setw(5) << i << endl;
    //problem 3
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    // Swapping the values
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped values: " << "a = " << a << ", b = " << b << endl;
 //problem 4
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << setw(10) << "Number" << setw(10) << "Square" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << setw(10) << i << setw(10) << i * i << endl;
    }
    //problem 5
    string str;
    cout << "Enter a string: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, str);
    cout << setw(50) << setiosflags(ios::left) << str << endl;
    return 0;
    }
