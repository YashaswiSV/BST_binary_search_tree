#include <iostream>
using namespace std;

class Node{
	public:
		 int data;
		 Node *left;
		 Node *right;
		 
		 Node(int d){
		 	data=d;
		 	left=NULL;
		 	right=NULL;
		 }
		 
};
class BST{
	   public:
	   	Node *root;
	   	
	   	BST(){
	   		root=NULL;
		   }
		void insert(int d){
			if(root==NULL){
				root=new Node(d);
			}
			else{
				Node *temp=root, *previous;
				
				while(temp!=NULL){
					previous=temp;
					if(d>temp->data){
						temp=temp->right;
					}
					else{
						temp=temp->left;
					}
				}
				if(d>previous->data)
				       previous->right=new Node(d);
				else
				    previous->left=new Node(d);       
			}
		}   
		void traverse(Node *temp){
			if(temp==NULL)
			     return;
			traverse(temp->left);
			cout<<temp->data<<" ";
			traverse(temp->right);
			     
		}
};
int main(){
	BST obj;
	obj.insert(89);
	obj.insert(87);
	obj.insert(82);
	obj.insert(18);
	obj.insert(23);
	obj.insert(345);
	obj.insert(45);
	obj.traverse(obj.root);
}
