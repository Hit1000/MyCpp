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
        
        cout<<"left of "<<data<<endl;
        root->left = builder(root->left);
        cout<<"right of "<<data<<endl;
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

void inorder(Node* root){
    //inorder    LNR
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << to_string((int)root->data)+ " ";
    inorder(root->right);
}
void preorder(Node* root){
    //preorder    NLR
    if(root == NULL){
        return;
    }

    cout << to_string((int)root->data)+ " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    //postorder    LRN
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << to_string((int)root->data)+ " ";
}

int main(){
    
    Node *root = NULL;
    root = builder(root);
    //1 2 -1 2 -1 -1 3 -1 -1 -1
    levelordertraverse(root);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}