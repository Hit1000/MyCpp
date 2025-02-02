#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    class Node{
        public:
        int data;
        Node *prevAddress;
        Node *nextAddress;

        Node(int data){
            this->data = data;
            this->nextAddress = NULL;
            this->prevAddress = NULL;
        }
        ~Node(){
            int val = data;
            if(nextAddress!=NULL){
                delete nextAddress;
                nextAddress= NULL;
            }
            cout<<"memory free for "<<val<<endl;
        }
    };
    
    void print(Node*&head){
        Node*temp = head;
        while (temp !=NULL) {
        cout<<temp->data<<" ";
        temp = temp->nextAddress;
        }
        cout<<endl;
    }
    
    int len(Node*head){
        Node*temp = head;
        int leng = 0;

        while (temp !=NULL) {
        leng++;
        temp = temp->nextAddress;
        }
        
        return leng;
    }

    void InsertAtHead(Node*&head,Node*&tail,int data){
        if(head==NULL){
            //  new node is created and assigned to the address of head.
            Node*temp  = new Node(data);
            head = temp;
            tail = temp;
        }
        else{
            Node*temp = new Node(data);
            temp->nextAddress = head;
            head->prevAddress = temp;
            head = temp;
        }
    }


    void InsertAtTail(Node*&tail,Node*&head,int data){
        if(tail == NULL){
            Node*temp = new Node(data);
            tail = temp;
            head = temp;
        }
        else{
            Node*temp = new Node(data);
            temp->prevAddress = tail;
            tail->nextAddress = temp;
            tail=temp;
        }
    }

    void InsertAtPosition(Node*&head,Node*&tail,int pos,int data){
        if(pos==0){
            InsertAtHead(head,tail,data);
            return;
        }

        Node*temp = head;

        int count = 0;
        while(count<pos-1){
            temp = temp->nextAddress;
            count++;
        }


        if(temp->nextAddress==NULL){
            InsertAtTail(tail,head,data);
            return;
        }

        Node *nodeToInsert = new Node(data);

        nodeToInsert -> nextAddress = temp->nextAddress ;
        nodeToInsert->prevAddress = temp;
        temp->nextAddress->prevAddress = nodeToInsert;
        temp->nextAddress= nodeToInsert;

        return;
    }


    void delPosition(Node*&head,Node*&tail,int pos){
        
        if(head==NULL){
            cout<<"ll is empty";
            return;
        }
        if(head->nextAddress == NULL){
            Node*temp = head;
            head = NULL;
            tail =NULL;
            delete(temp);
            return;
        }

        //deleting first element
        if(pos==0){
            Node*temp = head;
            temp->nextAddress->prevAddress = NULL;
            head = temp->nextAddress;
            temp->nextAddress = NULL;
            delete temp;
            return;
        }

        int length = len(head);
        if(pos + 1 == length){
            // deleteing last node with changing tail
            Node*temp = tail;
            tail=tail->prevAddress;
            tail->nextAddress = NULL;
            temp->prevAddress = NULL;
            delete (temp) ;
            return;
        }
        
        else{
            //deleting any other then first and last
            Node*current = head;
            Node*prev = NULL;

            int count = 0;

            while(count < pos){
                prev = current;
                current = current -> nextAddress ;
                count++;
            }

            current->prevAddress = NULL;
            prev->nextAddress = current->nextAddress;
            current->nextAddress->prevAddress = prev;
            current->nextAddress = NULL;
            delete current;
        }

    }


int main(){
    
    
    Node * hi = new Node(1);

    Node *head = hi;
    Node *tail = hi;

    print(head);
    cout<<"length of DLL  - "<<len(head)<<endl<<endl;
    
    InsertAtHead(head,tail,2);
    InsertAtHead(head,tail,3);

    print(head);
    cout<<"length of DLL  - "<<len(head)<<endl<<endl;

    InsertAtTail(tail,head,4);
    InsertAtTail(tail,head,5);

    print(head);
    cout<<"length of DLL  - "<<len(head)<<endl<<endl;

    InsertAtPosition(head,tail,0,55);
    InsertAtPosition(head,tail,3,44);
    InsertAtPosition(head,tail,len(head),66);

    print(head);
    cout<<"length of DLL  - "<<len(head)<<endl<<endl;

    //deleting 
    delPosition(head,tail,0);
    delPosition(head,tail,4);
    delPosition(head,tail,5);
    print(head);
    cout<<"length of DLL  - "<<len(head)<<endl<<endl;
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data;
    

    return 0;
}