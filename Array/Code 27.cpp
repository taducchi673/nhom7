#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i,j,k;
int arr[2][2][2];
int (*parr)[2][2]= arr;
cout<<"\n Enter the elements of a 2x2x2 array: ";
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
for(k = 0; k < 2; k++)
cin>>arr[i][j][k];
}
}
cout<<"\n The elements of the 2x2x2 array are: ";
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
for(k = 0; k < 2; k++)
cout<<*(*(*(parr+i)+j)+k);
}
}
getch();
return 0;
}
