#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;

};
node* insertBST(node* root, int item) {
    if (root == NULL) {
        node* newNode = new node();
        newNode->data = item;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    if (item < root->data)
        root->left = insertBST(root->left, item);
    else
        root->right = insertBST(root->right, item);
    // else: item is equal, do nothing or handle duplicates as needed

    return root;
}
void inorder(node* root)
{
    if(root==NULL)return;
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


int main(){
node* root = NULL;
int n, item;
cout << "Enter number of nodes: ";
cin >> n;
cout<<"Enter item: ";
for (int i = 0; i < n; ++i) {

    cin >> item;
    root = insertBST(root, item);
   }

   inorder(root);
 }
