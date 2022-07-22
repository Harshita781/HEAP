#include<iostream>
using namespace std;

void max_heapify(int *arr,int i,int n){
   int smallest=i;
   int left=2*i;
   int right=2*i+1;
   if(left<n && arr[left]<arr[smallest])
   {
    smallest=left;
   }
    if(right<=n && arr[right]<arr[smallest])
    {
        smallest=right;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        max_heapify(arr,smallest,n);
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
    int arr[6]={-1,55,53,54,56,52};
    int n=5;
    for(int i=n/2;i>0;i--){
        max_heapify(arr,i,n);
    }
    print(arr,n);
    return 0;
}
