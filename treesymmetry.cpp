#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node* left;
  struct node* right;
};

bool checkSymmetry(struct node* root){
   if(root==NULL){
     return true;
   }
   queue<struct node* > q;
  q.push(root->left);
  q.push(root->right);
   while(!q.empty()){
    struct node* l=q.front();
    q.pop();
    struct node* r=q.front();
    q.pop();
    if(l==NULL && r==NULL){
      continue;
    }
    if((l!=NULL&&r==NULL) || (l==NULL && r!=NULL) ){
      return false;
    }
    if(l->data!=r->data){
      return false;
    }
    q.push(l->left);
    q.push(r->right);

    q.push(l->right);
    q.push(r->left);

   }
  return false;
}

int main(){

}
