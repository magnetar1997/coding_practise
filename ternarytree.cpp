#include<bits/stdc++.h>
using namespace std;
struct Node{
	char data;
	Node *left,*right;
};
Node *newNode(char Data)
{
    Node *new_node = new Node;
    new_node->data = Data;
    new_node->left = new_node->right = NULL;
    return new_node;
}
void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/


Node *convertExpression(string str,int i)
{
    if(i>=str.size()){
        return NULL;
    }
    
    Node* root=new Node;
    root->left=NULL;
    root->right=NULL;
    root->data=str[i];
    i++;
    
    
    // recursively see the code now 
    // if you see a ? then the immediate next part is you rleft subtree
    if(i<str.size() && str[i]=='?'){
        root->left=convertExpression(str,i+1);
    }
    else if(i<str.size()){
        root->right=convertExpression(str,i+1);
    }
    return root;
}