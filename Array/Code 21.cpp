#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i, j, arr[3][3];
cout<<"\n Enter the elements of the matrix ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr[i][j];
}
}
cout<<"\n The elements of the matrix are ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n\n";
}
cout<<"\n The elements of the transposed matrix are ";
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
cout<<arr[j][i]<<" ";
}
cout<<"\n\n";
}
return 0;
}





