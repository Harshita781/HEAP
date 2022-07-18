#include<iostream>
using namespace std;

void max_heapify(int *arr,int i,int n){
   int largest=i;
   int left=2*i;
   int right=2*i+1;
   if(left<n && arr[left]>arr[largest])
   {
    largest=left;
   }
    if(right<=n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
}
    
}
void print(int arr[],int n){
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        max_heapify(arr,i,n);
    }
    print(arr,n);
    return 0;
}
