#include <iostream>
using namespace std;

int main() {
    string N;
    string FN;
    string A;
    string ID;
    string DEPT;


    cout << "\n=============SMIU--ID--CARD==============";
    cout << "\n-----------------------------------------";
    
    cout << "\nENTER NAME: ";
    cin >>N;
    cout << "ENTER FATHER NAME: ";
    cin >>FN;
    cout << "ENTER AGE: ";
    cin >>A;
    cout << "ENTER ID NUMBER: ";
    cin >>ID;
    cout << "ENTER DEPT NAME: ";
    cin >>DEPT;

    cout << "\n------Student-Information------";

    cout << "\nName is: "<< N;
    cout << "\nFather Name is: "<< FN;
    cout << "\nYour Age is: "<< A;
    cout << "\nID Name is: "<< ID;
    cout << "\nYour Dept Name is: "<< DEPT;
    
    return 0;
}