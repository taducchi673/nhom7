#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i, n, num, pos, arr[10];
    cout<<"\n Enter the number of elements in the array : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"\n arr[%d] = "<< i;
        cin>>arr[i];
    }
    cout<<"\n Enter the number to be inserted : ";
    cin>>num;
    cout<<"\n Enter the position at which the number has to be added :";
    cin>>pos;
    for(i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
        arr[pos] = num;
        n = n+1;
        cout<<"\n The array after insertion of" <<num<<"is";
    }
    for(i=0;i<n;i++){
        cout<<"\n arr["<<i"] ="<< arr[i];
    }
return 0;
}