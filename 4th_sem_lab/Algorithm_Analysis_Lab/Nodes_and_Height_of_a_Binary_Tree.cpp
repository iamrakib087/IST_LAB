#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node*left;
Node*right;
Node(int d){
data = d;
left = right = NULL;
}
};


//Function for Number of Nodes
int Number_Of_Nodes (Node*root){
if(root==NULL) {return 0;}
int LN,RN;
LN = Number_Of_Nodes (root -> left);
RN = Number_Of_Nodes (root -> right);
return (LN+RN+1);
}

//Function for Height of tree
int Height (Node*root){
if (root == NULL) {return -1;}
int LN,RN;
LN = Height (root -> left);
RN = Height (root -> right);
return max(LN,RN)+1;
}


int main(){
Node*root = new Node(0);
root -> left =  new Node(1);
root -> right =  new Node(2);
root -> left -> left =  new Node(5);
root -> left -> right =  new Node(4);
root -> right -> right =  new Node(3);
cout<<"Number of Nodes: "<<Number_Of_Nodes(root)<<endl;
cout<<"Height of Tree: "<<Height(root)<<endl;
return 0;}
