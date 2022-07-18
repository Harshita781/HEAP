#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    
    heap(){
        arr[0]=-1;
        size=0;
    }
    
      void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;

        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftchild=2*i;
            int rightchild=(2*i)+1;
           if(leftchild<size  && arr[i]<leftchild){
                swap(leftchild,arr[i]);
           }
           else if(rightchild<size  && arr[i]<rightchild){
                swap(rightchild,arr[i]);
           }
           else{
            return ;
           }
        }
        
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    heap h;
    h.insert(12);
    h.insert(40);
    h.insert(23);
    h.insert(33);
    h.insert(10);
    h.insert(20);
    h.print();
    h.Delete();
    h.print();
    return 0;
}