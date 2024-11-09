#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node* right ;
int value;
struct node* left ;

};

int sizeoftree(struct node* tree){
  if(tree!=NULL){ 
return 1+ sizeoftree(tree->right)+sizeoftree(tree->left);
    
}}

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
int Hightof_tree(struct node* tree) {
    if (tree == NULL) return 0;
    int leftHeight = Hightof_tree(tree->left);
    int rightHeight = Hightof_tree(tree->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
int findLevel(struct node* root, int value, int level) {
    if (root == NULL) return 0; 

    if (root->value == value) return level; 

    int leftLevel = findLevel(root->left, value, level + 1);
    if (leftLevel != 0) return leftLevel; 

    return findLevel(root->right, value, level + 1);
}
    

    
    
    
    
    
    
    
}



int main(){
      struct node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(15);
    root->right->right=createNode(27);
    root->right->left->right=createNode(34);


}

