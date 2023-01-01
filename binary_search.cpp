#include<iostream>
using namespace std;
int binarySearch(int array[], int item, int low, int high, int counter)
{
	while(low <= high)
	{
		counter++;
		int mid = (low + high) / 2;
		if (item == array[mid]){
			cout<<"Founded element "<<" "<<array[mid]<<"\n";
			cout<<"in "<<counter<<" steps \n";
			return 0;
		}
		if( item > array[mid]){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout<<"Element not present in list \n";
	return 0;
}
int main ()
{
	int list[] = {1,2,3,4,5,6,7,8,9,10}; 
	int low = 0;
	int high = (sizeof(list) / sizeof(int)) - 1; // sizeof return the size of element by byte
	int counter = 0; // count the steps until find the element
	int item;
	cout<<"Enter the number to search for.. \n";
	cin>>item;
	binarySearch(list, item , low ,high , counter);
}