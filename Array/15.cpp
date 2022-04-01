/* Bài 15*/

#include <iostream>

using namespace std;

int main()
{
        int arr[]={1,2,3,4,5,6,7,8,9};
        int *ptr1, *ptr2;
        ptr1 = arr;
        ptr2 = &arr[8];
        while(ptr1<=ptr2)
        {
                  cout << *ptr1;
                  ptr1++;
        }
         return 0;
}

/*Bài 16*/

#include <iostream>

using namespace std;

int main()
{
	int arr[2][2] = {12, 34, 56,32};
	int i, j;
	for(i=0;i<2;i++){
		cout << "\n";
		for(j=0;j<2;j++)	
			cout << "\t" << arr[i][j];
	}	
	return 0;
}

/*Bài 17*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int arr[7][7]={0};
	int row=2, col, i, j;
	arr[0][0] = arr[1][0] = arr[1][1] = 1;
	while(row <= 7){	
		arr[row][0] = 1;
		for(col = 1; col <= row; col++){
			arr[row][col] = arr[row–1][col–1] + arr[row–1][col];
		}
		row++;
	}	
	for(i=0; i<7; i++){
		cout << "\n";
		for(j=0; j<=i; j++)
			cout << arr[i][j];
	}
	getch();
	return 0;
}

/*Bài 18*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int sales[5][3], i, j, total_sales=0;
//INPUT DATA
	cout << "\n ENTER THE DATA";
	cout <<"\n *****************";
	for(i=0; i<5; i++){
		cout <<"\n Enter the sales of 3 items sold by salesman " << i+1 << ": ";
		for(j=0; j<3; j++)
			cin >> sales[i][j];
	
	}
// PRINT TOTAL SALES BY EACH SALESMAN
	for(i=0; i<5; i++){
		total_sales = 0;
		for(j=0; j<3; j++)
			total_sales += sales[i][j];	
		cout <<"\n Total Sales By Salesman " << i+1 << "= " << total_sales;
	}
// TOTAL SALES OF EACH ITEM
	for(i=0; i<3; i++){// for each item
		total_sales=0;
		for(j=0; j<5; j++)// for each salesman
			total_sales += sales[j][i];
		cout << "\n Total sales of item  " << i+1 << "= "<< total_sales;
	}
	getch();
	return 0;
}

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
