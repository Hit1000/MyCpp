#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//////////////with Node*

// Node* insert(Node* root,int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }

//     if(data < root->data){
//         root->left = insert(root->left,data);
//     }
//     else if(data > root->data){
//         root->right = insert(root->right,data);
//     }
// }
// void builder(Node* &root){
//     int data;
//     cin>>data;
//     while(data!=-1){
//         root = insert(root,data);
//         cin>>data;
//     }
// }

//////////////// with void

void insert(Node *&root, int data)
{
    Node *temp = new Node(data);
    if (root == NULL)
    {
        root = temp;
        return;
    }

    if (data < root->data)
    {
        insert(root->left, data);
    }
    else if (data > root->data)
    {
        insert(root->right, data);
    }
}
void builder(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insert(root, data);
        cin >> data;
    }
}

void levelordertraverse(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *maxEle(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *minEle(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deleteNode(Node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        // node with no child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // node with 1 child
        //  right
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // left
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // node with 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minEle(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right, mini);
            return root;

            // int maxi = maxEle(root->left)->data;
            // root->data = maxi;
            // root->left = deleteNode(root->left, maxi);
            // return root;
        }
    }

    else if (root->data > val)
    {
        root->left = deleteNode(root->left, val);
        return root;
    }

    else
    {
        root->right = deleteNode(root->right, val);
        return root;
    }
}

int main()
{

    Node *root = NULL;

    builder(root);

    levelordertraverse(root);

    cout << endl;
    deleteNode(root, 4);

    levelordertraverse(root);

    return 0;
}  