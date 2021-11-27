#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};
bool issametree(node *root1,node *root2){
    if(root1==NULL and root2==NULL){
         return true;
    }
    if(root1==NULL or root2==NULL) {
        return false;
    }
    return root1->data==root2->data and issametree(root1->left,root2->left) and issametree(root1->right,root2->right);
}