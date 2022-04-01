#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int arr1[10], arr2[10], arr3[20];
	int n1, n2, m, index=0;
	cout << "\n Enter the number of elements in array1 : ";
	cin >> n1;
	cout << "\n\n Enter the elements of the first array";
	for(int i=0;i<n1;i++) {
		cout << "\n arr1[" << i << "] = ";
		cin >> arr1[i];
	}
	cout << "\n Enter the number of elements in array2 : ";
	cin >> n2;
	cout << "\n\n Enter the elements of the first array";
	for(int i=0;i<n2;i++) {
		cout << "\n arr2[" << i << "] = ";
		cin >> arr2[i];
	}
	m = n1+n2;
	for(int i=0;i<n1;i++) {
		arr3[index] = arr1[i];
		index++;
	}
	for(int i=0;i<n2;i++) {
		arr3[index] = arr2[i];
		index++;
	}
	cout << "\n\n The merged array is";
	for(int i=0;i<m;i++) {
		cout << "\n arr[" << i << "] = " << arr3[i];
		getch();
	}
	return 0;
}