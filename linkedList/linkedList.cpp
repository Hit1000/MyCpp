#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head, *tail = NULL;

    void addNode(int data){
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void display(){
        struct node *current = head;

        if(head== NULL){
            cout<<"list is empty";
            return;
        } 
        else{
            cout<<"node is ";
            while(current!=NULL){
                cout<<current->data<<" ";
                current= current->next;
            }
            cout<<endl;
        }
    }
    
int main(){
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);
    
    display();
    
    
    return 0;
}