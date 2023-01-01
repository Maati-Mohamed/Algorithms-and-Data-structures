#include<iostream>
using namespace std;
int main()
{
    int x[5]; // Declare an array with size of 5 element //

    cout<<"Enter 5 random unordered number \n"; // Ask user to enter the number 
    for(int i = 0; i < 5; i++){
        cin>>x[i]; // take the element of array from the user 
    }

    cout<<"****************** \n"; // print simple break line 

    int tmp = 0;  /* temporary variable to save the value of the current index
                     of an element of our array when he is biger than the next element of it. */

    for(int i = 0; i < 5; i++){ 
        for(int n = 0; n < 5; n++){
            if(x[n-1] > x[n]) {
                tmp = x[n-1];
                x[n-1] = x[n];
                x[n] = tmp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout<<x[i]<<"\n";
    }

    return 0;
}