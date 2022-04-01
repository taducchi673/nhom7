#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i, n, pos, arr[10];
    cout<<"\n Enter the number of elements in the array : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"\n arr["<<i"] = ";
        cin>>arr[i];
    }
    cout<<"\nEnter the position from which the number has to be deleted : ";
    cin>>pos;
    for(i=pos; i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"\n The array after deletion is : ";
    for(i=0;i<n;i++){
        cout<<"\n arr["<<i<<"] =" <<arr[i];
    }
return 0;
}