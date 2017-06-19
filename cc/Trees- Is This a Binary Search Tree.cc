/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
#include<climits>
   bool checkBST(Node* root) {
   	return helper(root, INT_MIN, INT_MAX);
   }
   bool helper(Node *root, int min, int max){
   	if(root->data >= max || root->data <= min)
   		return false;
   	bool left, right;
    left = right = true;
   	if(root->left)
   		left = helper(root->left, min, root->data);
   	if(root->right)
   		right = helper(root->right, root->data, max);
   	return left & right;
   }
