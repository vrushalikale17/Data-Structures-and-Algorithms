#include<iostream>
#include<climits>
using namespace std; 
int kadane(int arr[], int n){
    int currsum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        max_sum = max(currsum,max_sum);
        if(currsum<0){
            currsum = 0;
        }
    }
    return max_sum;    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum += arr[i];
        arr[i] = arr[i] * -1;
    }
    wrapsum = totalsum + kadane(arr, n);
    cout<<"Maximum Circular subarray sum is : "<<max(wrapsum, nonwrapsum)<<endl;
    return 0;
}
