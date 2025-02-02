#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    class Node{
        public:
            int data;
            Node *left;
            Node *right;
            Node(int val){
                data=val;
                left=NULL;
                right = NULL;
            }

    };


Node* builder(Node* root){
        // cout<<"enter the data "<<endl;
        int data;
        cin>>data;
        root = new Node(data);

        if(data == -1){
            return NULL;
        }
        
        // cout<<"left of "<<data<<endl;
        root->left = builder(root->left);
        // cout<<"right of "<<data<<endl;
        root->right = builder(root->right);
        return root;
    }


void levelordertraverse(Node * root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main(){
    
    Node *root = NULL;
    root = builder(root);
    //1 2 -1 2 -1 -1 3 -1 -1 -1
    // 1 2 3 -1 -1 4 -1 -1 5 6 8 -1 -1 9 -1 -1 7 10 -1 -1 11 -1 -1
    levelordertraverse(root);

    
    return 0;
}