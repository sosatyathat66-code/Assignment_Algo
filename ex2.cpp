#include <iostream> 
using namespace std; 
int main() { 
    string name; 
    int age; 
    double gpa; 
// TODO: prompt for and read name, age, gpa 
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
// TODO: print them in one formatted line 
    cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    return 0; 
}
