#include <iostream>

using namespace std;

int main(){
	int i, n, arr[20], large, second_large;
	cout << "\n Enter the number of elements in the array : ";
	cin >> n;
	cout << "\n Enter the elements ";
	for(i=0;i<n;i++)
		cin >> arr[i];
	large = arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>large)
			large = arr[i];
	}
	second_large = arr[1];
	for(i=0;i<n;i++)
	{
		if(arr[i] != large)
			{
				if(arr[i]>second_large)
					second_large = arr[i];
			}
	}
	cout << "\n The numbers you entered are : ";
	for(i=0;i<n;i++)
		cout << "\t" << arr[i];
	cout << "\n The largest of these numbers is : " << large;
	cout << "\n The second largest of these numbers is :" << second_large;
	return 0;
}