#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    class Node{
        public:
        int data ;
        Node* next = NULL;

        Node(int data){
            this -> data = data;
            next = NULL;
        }

        ~Node(){
            int val = data;
            if(this->next!=NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"this memory of value "<<val<<" is free."<<endl;
        }
    };

    void add_front(Node*&head,int v){
        Node * temp = new Node(v);
        temp->next = head;
        head = temp;
    }

    void add_back(Node*&tail,int v){
        Node * temp = new Node(v);
        tail->next = temp;
        tail = temp;
    }
    
    void add_at(Node*&head,Node*&tail,int v,int p){ 
        Node* temp = head;
        int count = 0;

        if(p == 0){
            add_front(head,v);
            return;
        }

        while(count < p-1){
            temp = temp->next;
            count++;
        }

        if(temp->next == NULL){
            add_back(tail,v);
            return;
        }

        Node *tem = new Node(v);
        tem->next = temp->next;
        temp->next = tem;
    }
    
    void del(Node*&head,Node*&tail,int v){
        int count = 0;
        Node *current = head;
        Node *prev = NULL;
        while(current->data != v){
            if(current->next == NULL){
                cout<<"Not found"<<endl;
                return;
            }
            prev = current;
            current = current->next;
            count++;
        }
        if(count == 0){
            head = head->next;
            current->next = NULL;
            delete current;
        }
        else if(current->next == NULL){
            tail = prev;
            prev->next = NULL;
            delete current;
        }
        else{
            prev->next = current->next;
            current->next = NULL;
            delete current;
        }
    }

    void print(Node*head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }

    // void reverse(Node*head){
    //     if(head == NULL || head->next == NULL){
    //         return;
    //     }
    //     Node* prev = NULL;
    //     Node* current = head;
    //     Node* forward = NULL;

    //     while(current != NULL){
    //         forward = current->next;
    //         current->next = prev;
    //         prev = current;
    //         current = forward;
    //     }
    // }

    void rec_helper(Node*&head, Node*curr, Node*prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        Node* forward = curr->next;
        rec_helper(head,forward,curr);
        curr->next = prev;
    }

    void rec_rev(Node* &head){
        Node *current = head;
        Node *prev = NULL;
        rec_helper(head,current,prev);
    }

int main(){
    
    Node*hi = new Node(2);
    Node* head = hi;
    Node* tail = hi;

    add_front(head,4);
    add_front(head,7);
    add_front(head,5);
    add_at(head,tail,9,4);
    add_at(head,tail,90,2);
    print(head);
    cout<<endl;
    // cout<<head->data<<" "<<tail->data<<endl;
    
    rec_rev(head);
    print(head);
    
    
    return 0;
}