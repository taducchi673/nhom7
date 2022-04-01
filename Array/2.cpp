#include <iostream>
using namespace std;
int main(){
	int i, n, arr[20], sum = 0;
	float mean = 0.0;
	cout << "\n Enter the number of elements in the array : ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "\n arr[" << i << "] = ";
		cin >> arr[i];
	}
	for(i=0;i<n;i++)
		sum+=arr[i];
	mean = (float) sum/n;
	cout << "\nThe sum of the array elements = " << sum;
	printf("\nThe mean of the array elements = %.2f", mean);
	return 0;
}