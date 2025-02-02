#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    class Node{
        public:
            int data;
            //because it is pointing to node type data
            Node*address;

        //to assigne value
        Node(int data){
            this -> data = data;
            address = NULL;
        }
        ~Node(){
            int val = data;
            if(this->address!=NULL){
                delete address;
                this->address = NULL;
            }
            cout<<"this memory of value "<<val<<" is free."<<endl;
        }

    };
    void InsertHead(Node*&head,int d){
        //create a new node
        Node*temp = new Node(d);
        //assing address value
        temp->address = head;
        //changing head
        head=temp;
    }

    void InsertTail(Node*&Tail,int d){
        //create a new node
        Node*temp = new Node(d);
        //assing address value
        Tail->address = temp;
        //changing tail
        Tail = temp;
    }

    void InsertPosition(Node*&tail,Node*&head, int pos, int value){
        Node*temp = head;
        int count = 0;

        //if adding at first index
        if(pos==0){
            InsertHead(head,value);
            return;
        }

        //going to position before to insert by traversing 
        while(count<pos-1){
            temp = temp->address;
            count++;
        }

        //if adding at last index
        if(temp->address==NULL){
            InsertTail(tail,value);
            return;
        }

        //creating a new node to insert
        Node *toinsert = new Node(value);

        toinsert->address = temp->address;
        temp->address = toinsert;

    }

    void delPosition(Node*&head,int pos){
        //deleting first element
        if(pos==0){
            Node *temp = head;
            head=head->address;
            //memory free karo
            temp->address = NULL;
            delete temp;
        }
        
        else{
            //deleting any other then first
            Node*current = head;
            Node*prev = NULL;

            int count = 0;

            while(count < pos){
                prev = current;
                current = current -> address ;
                count++;
            }

            prev->address = current->address;
            current->address = NULL;
            delete current;
        }

    }

    void print(Node*&head){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp ->data <<" ";
            temp = temp->address;
        }
        cout<<endl;
    }



    
int main(){
    Node*hi = new Node(2);
    // cout<<(*hi).data<<endl;
    // cout<<hi -> address<<endl;
    
    Node *head = hi;
    Node *tail= hi;
    InsertHead(head,70);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    InsertHead(head,0);
    print(head);

    InsertTail(tail, 8);
    print(head);

    InsertPosition(tail,head,1,44);
    InsertPosition(tail,head,5,74);

    print(head);

    delPosition(head,1);
    print(head);
    
    return 0;
}