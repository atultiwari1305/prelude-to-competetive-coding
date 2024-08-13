#include<iostream>
using namespace std;

void insertAtFirst(int arr[],int *n, int key){
    (*n)++;
    for(int i=(*n-1);i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=key;
}

void insert(int arr[], int *n, int pos, int key){
    (*n)++;
    for(int i=(*n-1);i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1] = key;
}

void display(int arr[],int n){
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

;   insert(arr,&n,5,23);
    display(arr,n);

    insertAtFirst(arr,&n,20);
    display(arr,n);

    return 0;
}