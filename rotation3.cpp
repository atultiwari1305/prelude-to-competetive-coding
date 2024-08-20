#include<iostream>
using namespace std;

void customReverse(int arr[], int start, int end)
{
    int i = start;
    int j = end - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int r;
    cout<<"Enter the number of rotation: ";
    cin>>r;
    r = r%10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    customReverse(arr, 0, (10 - r));
    customReverse(arr, (10 - r), 10);
    customReverse(arr, 0, 10);

    for (int i=0;i<10;i++)
    {
        cout << arr[i] << " ";
    }
}
