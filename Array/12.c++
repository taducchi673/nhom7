#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() {
	int arr1[10], arr2[10], arr3[20];
	int n1, n2, m, index=0;
	int index_first = 0, index_second = 0;
	cout << "\n Enter the number of elements in array1 : ";
	cin >> n1;
	cout << "\n\n Enter the elements of the first array";
	for(int i=0;i<n1;i++) {
		cout << "\n arr1[" << i << "] = ";
		cin >> arr1[i];
	}
	cout << "\n Enter the number of elements in array2 : ";
	cin >> n2;
	cout << "\n\n Enter the elements of the second array";
	for(int i=0;i<n1;i++) {
		cout << "\n arr2[" << i << "] = ";
		cin >> arr2[i];
	}
	m = n1+n2;
	while(index_first < n1 && index_second < n2) {
		if(arr1[index_first]<arr2[index_second])  {
			arr3[index] = arr1[index_first];
			index_first++;
		}
		else {
			arr3[index] = arr2[index_second];
			index_second++;
		}
	index++;
	}
	// if elements of the first array are over and the second array has some elements
	if(index_first == n1) {
		while(index_second<n2) {
			arr3[index] = arr2[index_second];
			index_second++;
			index++;
		}
	}
	// if elements of the second array are over and the first array has some elements
	else if(index_second == n2) {
		while(index_first<n1) {
			arr3[index] = arr1[index_first];
			index_first++;
			index++;
		}
	}
	cout << "\n\n The merged array is";
	for(int i=0;i<m;i++)
		cout << "\n arr[" << i << "] = " << arr3[i];
		getch();
	return 0;
}