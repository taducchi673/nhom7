#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
void read_array(int arr[], int n);
int find_small(int arr[], int n);
int main() {
	int num[10], n, smallest;
	cout << "\n Enter the size of the array : ";
	cin >> n;
	read_array(num, n);
	smallest = find_small(num, n);
	cout << "\n The smallest number in the array is = " << smallest;
	getch();
	return 0;
}
void read_array(int arr[10], int n) {
	for(int i=0;i<n;i++) {
		cout << "\n arr[" << i << "] = ";
		cin >> arr[i];
	}
}
int find_small(int arr[10], int n) {
	int small = arr[0];
	for(int i=1;i<n;i++) {
		if(arr[i] < small)
		small = arr[i];	
	}
return small;
}