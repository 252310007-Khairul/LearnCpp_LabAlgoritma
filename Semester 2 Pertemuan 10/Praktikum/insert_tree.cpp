#include <iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node (int value)
		{
			data = value;
			left = NULL;
			right = NULL;
		}
};

int main() {
	Node* root = new Node(17);
	
	// sisi kiri
	root -> left = new Node(41);
	root -> left -> left = new Node(64);
	root -> left -> left -> left = new Node(22);
	root -> left -> left -> right = new Node(31);
	
	// sisi kanan
	root -> right = new Node(20);
	root -> right -> left = new Node(23);
	root -> right -> left -> left = new Node(47);
	root -> right -> left -> right = new Node(56);
	root -> right -> right = new Node(33);
	
	// output data
	cout << root -> right -> left -> right -> data << ' ';
	cout << root -> right -> right -> data << ' ';
	cout << root -> left -> left -> right -> data;
	
	return 0;
}
