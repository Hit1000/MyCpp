#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    class Node{
        public:
        int data;
        Node * nextAddress;

        Node(){
            data = 0;
            nextAddress = NULL;
        }

        Node(int d){
            data = d;
            nextAddress = NULL;
        }

        ~Node(){
            int val = data;
            if(nextAddress != NULL){
                delete(nextAddress);
                nextAddress = NULL;
            }
            cout<<"dectrure is called for "<<val<<endl;
        }
    };
    

    void Insert(Node*&tail,int data,int num){
        if (tail == NULL){//              empty list 
            Node *temp = new Node(data);
            tail = temp;    
            temp->nextAddress = temp;
        }
        else{
            Node *current = tail;
            while(current->data != num){
                current = current->nextAddress;
            }
            Node *temp = new Node(data);
            temp->nextAddress= current->nextAddress;
            current->nextAddress = temp;
            
        }

    }

    void Delete(Node*&tail,int num){
        if(tail == NULL){
            cout<<"list is empty"<<endl;
            return;
        }
        else{
            Node*prev = tail;
            Node *current = tail->nextAddress;
            while(current->data != num){
                prev = current;
                current = current->nextAddress;
            }

            //if only one element in present 
            if(current == prev){
                tail == NULL;

            }

            //if deleting element in tail
            else if(tail == current){
                tail=tail->nextAddress;
            }
            prev->nextAddress = current->nextAddress;
            current->nextAddress= NULL;
            // free(current);
            delete(current);
        }
    }

    
    void print(Node*&tail){
        Node *temp = tail;
        
        if(tail ==NULL){
            cout<< "List Empty"<<endl;
            return;
        }
        
        do{
            cout<<temp->data<<" ";
            temp = temp->nextAddress;
        }while(temp!=tail);
        cout<<endl;
    }

int main(){
    
    Node*tail = NULL;

    Insert(tail,4,0);
    print(tail);

    Insert(tail,5,4);
    print(tail);
    
    Insert(tail,6,4);
    print(tail);

    Delete(tail,5);
    print(tail);

    Insert(tail,7,6);
    Insert(tail,8,7);
    print(tail);
    
    cout<<(tail->data)<<endl;
    Delete(tail,4);
    print(tail);
    cout<<(tail->data);

    return 0;
}