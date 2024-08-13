#include<iostream>
using namespace std;

void deletion(int arr[], int *n, int pos){
    if(pos<0 || pos>*n){
        return;
    }
    for(int i=pos;i<=(*n-1);i++){
        arr[i-1] = arr[i];
    }
    (*n)--;
}

void display(int arr[], int n){
    cout<<"Array Elements are: ";
    for(int i=0;i<n;i++){
        cout<<""<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    display(arr,n);

    deletion(arr, &n, 4);
    display(arr,n);

    return 0;
}