#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int array[10], i, n, j, flag =0;
    cout<<"\n Enter the size of the array : ";
    cin>>);
    for(i=0;i<n;i++){
        cout<<"\n array[%d] = "<< i;
        cin>>array[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i] == array[j] && i!=j){
                flag =1;
                cout<<"\n Duplicate numbers found at locations"<<i<<" "<<j;
            }
        }
    }
    if(flag==0)
    cout<<"\n No Duplicates Found";
    return 0;
}