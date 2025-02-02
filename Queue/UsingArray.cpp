#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    
class Queue {
    int *arr;
    int first;
    int rear;
    int size;

public:
    Queue() {
        size = 10001;
        arr = new int[size];
        first = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(first == rear){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        //if full 
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[first];
            arr[first] = -1;
            first++;
            if(first == rear){
                first = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        return arr[first];
    }
};
    
    
int main(){
    
    
    int front = 498;
    int rear = 497;
    if(rear == (front-1)%(501-1)){
               cout<<((front+501)-2)%(500)<<endl;
               cout<<499%500;
    }
    
    return 0;
}