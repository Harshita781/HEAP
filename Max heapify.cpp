#include<iostream>
#include<stdlib.h>
using namespace std;
void max_heapify(int *arr,int i,int n){
   int largest=i;
   int left=2*i+1;
   int right=2*i+2;
   if(left<=n && arr[left]>arr[i])
    largest=left;
   else
    largest=i;
    if(right<=n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i)
        swap(arr[i],arr[largest]);
    max_heapify(arr,largest,n);
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i;
    cout<<"Enter the value of i: ";
    cin>>i;
    max_heapify(arr,i,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
