#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[], int s, int e){
    int pivot= arr[e];
    int i = s-1;
    for(int j=s; j<e; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}
void quickSort(int arr[], int s, int e){
    if(s<e)         
    {  int p = Partition(arr, s, e);
       quickSort(arr, s,(p-1)); 
       quickSort(arr, (p+1), e);   

    }
}
int main()
{   
    int n;
    cout<<"\nEnter the number of elements: ";
    cin>>n;
    cout<<endl;
    int arr[n];   //  create array with given number of elements.
    cout<<"Enter the elements to be sorted: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];  //  taking array input.
    }
    cout<<endl;
    quickSort(arr, 0, n-1);
    cout<< "The sorted elements are - ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl<<endl;
    return 0;
}
