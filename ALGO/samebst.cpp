#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node* left;
    node* right;

    node(int value){
        value = value;
        left=NULL;
        right=NULL;
    }
};
bool Issametree(node* root1,node* root2){
    if(root1==NULL and root2==NULL){
        return true;
    }
    if(root1==NULL or root2==NULL)
    {
        return false;
    }

        return (root1->value==root2->value and Issametree(root1->left,root2->left) and Issametree(root1->right,root2->right));
}
signed main(){
    node *root1=new node(5);
    node *root2=new node(5);
    root1->left=new node(4);
    root1->left->left=new node(6);
    root1->left->right=new node(7);
    root2->left=new node(4);
    root2->left->left=new node(6);
    root2->left->right=new node(8);
    cout<<Issametree(root1,root2)<<endl;
    
}