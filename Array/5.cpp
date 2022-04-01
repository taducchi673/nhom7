#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int number=0, digit[10], numofdigits,i;
	cout << "\n Enter the number of digits : ";
	cin >> numofdigits;
	for(i=0;i<numofdigits;i++)
	{
		cout << "\n Enter the digit at position " << i+1 << ": ";
		cin >> digit[i];
	}
	i=0;
	while(i<numofdigits)
	{
		number = number + digit[i] * pow(10,i);
		i++;
	}
	cout << "\n The number is : "<< number;
	return 0;
}