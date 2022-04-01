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
