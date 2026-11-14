#include <iostream>
using namespace std;

int main() {
    string name;
    string fatherName;
    string email;
    string number;
    string cnic;
    string address;
    string city;
    int age;

    cout << "========================================\n";
    cout << "       PERSONAL INFORMATION PORTAL      \n";
    cout << "========================================\n\n";

    cout << "---------- Personal Details ------------\n\n";


    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your FatherName: ";
    getline(cin, fatherName);

    cout << "Enter your Email: ";
    getline(cin, email);
    
    cout << "Enter mobile number: ";
    getline(cin, number);
    
    cout << "Enter your cnic number: ";
    getline(cin, cnic);

    cout << "Enter your Address: ";
    getline(cin, address);

    cout << "Enter your City: ";
    getline(cin, city);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // To ignore the newline character left by cin >> age

    cout << "\n========================================\n";
    cout << "         REGISTRATION DETAILS           \n";
    cout << "========================================\n";

    cout << "\nName: " << name;
    cout << "\nFather's Name: " << fatherName;
    cout << "\nEmail: " << email;
    cout << "\nMobile number: " << number;
    cout << "\nCNIC: " << cnic;
    cout << "\nAddress: " << address;
    cout << "\nCity: " << city;
    cout << "\nAge: " << age;

    return 0;
}