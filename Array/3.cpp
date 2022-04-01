#include <iostream>

using namespace std;

int main(){
	int i, n, arr[20], small, pos;
	cout << "\n Enter the number of elements in the array : ";
	cin >> n;
	cout << "\n Enter the elements : ";
	for(i=0;i<n;i++)
		cin >> arr[i];
	small = arr[0];
	pos =0;
	for(i=1;i<n;i++){
		if(arr[i]<small)
			{
				small = arr[i];
				pos = i;
			}
	}
	cout << "\n The smallest element is : " << small;
	cout << "\n The position of the smallest element in the array is : "<< pos;
	return 0;
}