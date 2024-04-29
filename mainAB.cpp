//example

#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
};

Node* createNode(int key)
{
    Node *node = new Node();
    node-> key = key;
    node-> left = nullptr;
    node-> right = nullptr;
    return node;
}

void traverse(Node *temp) 
{
  if (temp != nullptr) {
    cout << " " << temp->key;
    traverse(temp->left);
    traverse(temp->right);
  }
}


int main()
{
    Node *root = createNode(1); //adds data to node
    cout << root-> key << endl; //prints stuff from root node

    root->left = createNode(2);
    root->left->left = createNode(4);

    root->right = createNode(3);
    root->right->left = createNode(5);

    traverse(root);

}