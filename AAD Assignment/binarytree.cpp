#include<iostream>
using namespace std;
struct node{
 int data;
 node* left;
 node* right;
};

node* createNode()
{
    cout<<"Press 1 if u want to create node or press 0 for end.";

    int choice;
    cout<<"\n Enter choice: ";

    cin>>choice;

    if(choice==0)
        return 0;
    else{
        node* newNode=new node();
        int item;

        cout<<"\n Enter item:";
        cin>>item;

        newNode->data=item;

        cout<<"Enter left child of "<<item;
        newNode->left=createNode();

        cout<<"Enter right child of "<<item;
        newNode->right=createNode();


        return newNode;


    }
}

void inordert(node* root)
{
    if(root==NULL)return;
    else{
        inordert(root->left);
        cout<<root->data<<" ";
        inordert(root->right);
    }
}

void searchk(node *root,int item){
if(root==NULL)
    cout<<"Not found";
else if(root->data==item)
    cout<<"Found";
else if(root->data>item)
    searchk(root->left,item);
else if(root->data<item)
{
    searchk(root->right,item);
}
}

 int main()

 {
    node* root = createNode();

    cout<<"inorder traversal: ";

    inordert(root);
    cout<<"Enter item for search: ";

    int item;
    cin>>item;

    searchk(root,item);
 }
