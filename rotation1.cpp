#include<iostream>
using namespace std;

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;

    int r = 3;
    int a[10];

    int k=0;
    for(int i=r;i<n;i++){
        a[k++]=arr[i];
    }
    for(int i=0;i<r;i++){
        a[k++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}