#include<iostream>
using namespace std;
//left rotation
int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;

    int r = 3;

    for(int i=0;i<r;i++){
        int temp = arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}