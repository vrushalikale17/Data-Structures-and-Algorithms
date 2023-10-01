#include<vector>
#include<iostream>
using namespace std;
void merge(int arr[],int s,int e,int mid){
    vector<int>temp;
    int left=s;
    int right=mid+1;
    while(left<=mid && right<=e)
    {
       if(arr[left]<arr[right])
       {
           temp.push_back(arr[left]);
           left++;
       }
       else{
           temp.push_back(arr[right]);
           right++;
       }
       
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=e)
    {
        temp.push_back(arr[right]);
        right++;
    }
  
  for(int i=s;i<=e;i++)
  {
      arr[i]=temp[i-s];
  }
    
}
void mergesort(int arr[],int s,int e)
{
    if(s==e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e,mid);
}
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"element :";
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";    }
}
