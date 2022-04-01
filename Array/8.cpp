#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i, n, j, num, arr[10];
    cout<<"\n Enter the number of elements in the array : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"\n arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"\n Enter the number to be inserted : ";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i] > num){
        for(j = n-1; j>=i; j--)
            arr[j+1] = arr[j];
            arr[i] = num;
        break;
        }
    }
    n = n+1;
    cout<<"\n The array after insertion of"<< num<< "is : ";
    for(i=0;i<n;i++){
        cout<<"\n arr["<<i<<"] ="<< arr[i];
        getch();
    }           
    return 0;
}