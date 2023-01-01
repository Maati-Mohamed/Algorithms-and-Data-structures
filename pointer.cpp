#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
int main()
{
    USHORT myAge;   // a variable
    USHORT * pAge = 0;    // a pointer
   
    myAge = 5; // assign myAge to be 5
    cout << "myAge: " << myAge << endl; // print 5
    pAge = &myAge;

    // assign address of myAge to pAge
    cout << "*pAge: " << *pAge << endl << endl; //print the vali=ue of address page = 5
    
    cout << "Setting *pAge = 7... " << endl;
    *pAge = 7;

    // sets myAge to 7
    cout << "*pAge: " << *pAge << endl;
    cout << "myAge: " << myAge << endl << endl;
    cout << "Setting myAge = 9… " << endl;
    myAge = 9;
    cout << "myAge: " << myAge << endl;
    cout << "*pAge: " << *pAge << endl;
    return 0;
}