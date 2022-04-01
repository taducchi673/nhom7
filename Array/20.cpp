/*Bài 20*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i, j, mat[3][3];

	cout << "\n Enter the elements of the matrix :";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin >> mat[i][j];
		}
	}
	cout <<"\n The elements of the matrix are ";
	for(i=0;i<3;i++){
	cout << "\n";
		for(j=0;j<3;j++)
			cout << "\t" << mat[i][j];
	}
	return 0;
}
