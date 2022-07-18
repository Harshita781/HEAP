#include<iostream>
#include<queue>
using namespace std;
int main(){
    //In priority queue heap is by default maxheap. 
    priority_queue<int,vector<int>, greater<int> >maxheap;

    maxheap.push(1);
    maxheap.push(5);
    maxheap.push(7);
    maxheap.push(10);
    maxheap.push(2);
    cout<<"Element at Top: "<<maxheap.top()<<endl;
    maxheap.pop();
    cout<<"Element at Top: "<<maxheap.top()<<endl;
    cout<<"Size is: "<<maxheap.size()<<endl;
    if(maxheap.empty()){
        cout<<"maxheap is empty"<<endl;
    }
    else{
        cout<<"maxheap is not empty"<<endl;
    }

    priority_queue<int,vector<int>, greater<int> >minheap;

    minheap.push(1);
    minheap.push(5);
    minheap.push(7);
    minheap.push(10);
    minheap.push(2);
    cout<<"Element at Top: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Element at Top: "<<minheap.top()<<endl;
    cout<<"Size is: "<<minheap.size()<<endl;
    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }

}