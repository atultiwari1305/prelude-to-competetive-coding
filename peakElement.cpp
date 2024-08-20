#include<iostream>
using namespace std;

int main(){
    int arr[] = {12, 10, 5, 7, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int peakElements[n];
    int peakIndex = 0;
    if(arr[0]>arr[1]){
        peakElements[peakIndex++] = arr[0];
    }
    for(int i=1; i<n-2;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            peakElements[peakIndex++] = arr[i];
        }
    }
    for(int i=0;i<peakIndex;i++){
        cout<<peakElements[i]<<" ";
    }
    return 0;
}