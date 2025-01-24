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

    return 0;
    }
