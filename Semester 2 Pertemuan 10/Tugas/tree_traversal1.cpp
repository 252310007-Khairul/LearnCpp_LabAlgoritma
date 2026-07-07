#include <iostream>

using namespace std;

// Struktur Node menggunakan struct (tanpa class)
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi untuk membuat node baru
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// 1. Traversal Preorder: Root -> Left -> Right
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// 2. Traversal Inorder: Left -> Root -> Right
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// 3. Traversal Postorder: Left -> Right -> Root
void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Membangun pohon sesuai ilustrasi pada gambar
    Node* root = createNode(7);
    
    // Subtree Kiri dari root (7)
    root->left = createNode(14);
    root->left->left = createNode(91);
    root->left->right = createNode(102);
    
    root->left->right->left = createNode(31);
    root->left->right->right = createNode(87);
    
    root->left->right->left->left = createNode(93);
    root->left->right->left->left->left = createNode(24);
    root->left->right->left->left->right = createNode(76);

    // Subtree Kanan dari root (7)
    root->right = createNode(83);
    root->right->left = createNode(192);
    root->right->right = createNode(932);
    
    root->right->right->right = createNode(153);
    root->right->right->right->left = createNode(772);
    root->right->right->right->right = createNode(812);

    // Menampilkan Hasil Traversal
    cout << "Hasil Traversal Tree:" << endl;
    cout << "-----------------------------------" << endl;
    
    cout << "Preorder  : ";
    preorder(root);
    cout << endl;

    cout << "Inorder   : ";
    inorder(root);
    cout << endl;

    cout << "Postorder : ";
    postorder(root);
    cout << endl;

    return 0;
}
