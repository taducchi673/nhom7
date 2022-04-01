/*Bài 19*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int marks[5][3], i, j, max_marks;
	for(i=0; i<5; i++){
		cout <<"\n Enter the marks obtained by student " << i+1 << ": ";
		for(j=0; j<3; j++){
			cout <<"\n marks["<< i<<"]["<< j <<"]" << " = ";
			cin >> marks[i][j];
		}
	}
	for(j=0; j<3; j++){
		max_marks = -99;
		for(i=0; i<5; i++){
			if(marks[i][j]>max_marks)
			max_marks = marks[i][j];
		}	
	cout << "\n The highest marks obtained in the subject " << i+1 << "= " << max_marks;
	}
	getch();
	return 0;
}