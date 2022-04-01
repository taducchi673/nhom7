#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int arr[2][2][2], i, j, k;
cout<<"\n Enter the elements of the matrix";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
cin>>arr[i][j][k];
}
}
}
cout<<"\n The matrix is : ";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"\n";
for(k=0;k<2;k++)
cout<<"arr["<<i<<"]["<<j<<"]["<<k<<"]="<<arr[i][j][k]<<"\t";
}
}
getch();
return 0;
}
