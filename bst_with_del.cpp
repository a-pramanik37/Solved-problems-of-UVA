#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};


node* insert(node* root, int data){

        if(root==NULL){
            node* temp = new node;
            temp->data = data;
            temp->left=temp->right=NULL;
            root=temp;
        }
        else if(data<=root->data){
            root->left=insert(root->left, data);
        }
        else{
            root->right=insert(root->right, data);
        }

        return root;

}



node* Find_in_suc(node* root)
{
    while(root->left != NULL) root = root->left;
    return root;
}


node* Delete(node *root, int data)
{
    if(root == NULL) return root;
    else if(data < root->data) root->left = Delete(root->left,data);
    else if (data > root->data) root->right = Delete(root->right,data);
    else
    {
        // Case 1:  No child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //Case 2: One child
        else if(root->left == NULL)
        {
            struct node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else
        {
            struct node *temp = Find_in_suc(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}


bool search(node* root, int data){

    if(root==NULL)return false;
    else if(root->data==data)return true;
    else if(data<root->data)search(root->left, data);
    else search(root->right, data);
}

void pre(node* root){
    if(root==NULL)return;
    printf("%d ", root->data);
    pre(root->left);
    pre(root->right);
}

void in(node* root){
    if(root==NULL)return;
    in(root->left);
    printf("%d ", root->data);
    in(root->right);
}

void post(node* root){
    if(root==NULL)return;
    post(root->left);
    post(root->right);
    printf("%d ",root->data);
}

int main()
{
    node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 18);
    root = insert(root, 16);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 11);
    printf("PREORDER>>>  ");
    pre(root);
    printf("\n");
    printf("INORDER>>>   ");
    in(root);
    printf("\n");
    printf("POSTORDER>>>  ");
    post(root);
    printf("\n");

    if(search(root, 111)==true)cout<<"Ase"<<endl;
    else printf("Nai\n");

    return 0;
}

