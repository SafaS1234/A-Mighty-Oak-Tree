#include <iostream>
#include <string>

using namespace std;

class Squirrel {
  private:
    string name;

  public:
    Squirrel(string name) {
      this->name = name;
    }

    string get_name() {
      return this->name;
    }
};

struct Node
{
    Squirrel data;
    Node *left;
    Node *right;

    Node()
    {
        data == Squirrel("");
        left = nullptr;
        right = nullptr;
    }
};

Node* createNode(const Squirrel& data)
{
    Node *node = new Node();
    node-> data = data;
    node-> left = nullptr;
    node-> right = nullptr;
    return node;
}

void traverse(Node *temp) 
{
  if (temp != nullptr) {
    cout << " " << temp->data.get_name();
    traverse(temp->left);
    traverse(temp->right);
  }
}


int main()
{
    // Node *root = createNode(1); //adds data to node
    // cout << root-> data << endl; //prints stuff from root node

    // root->left = createNode(2);
    // root->left->left = createNode(4);

    // root->right = createNode(3);
    // root->right->left = createNode(5);

    // traverse(root);
//----------------------------------------------------
    // Squirrel cheeks = Squirrel("Cheeks");
    // Node node_one = new Node(&cheeks);

    // Squirrel squeaks = Squirrel("Squeaks");
    // Node node_two = new Node(&squeaks);

    // Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
    // Node node_three = new Node(&fluffybutt);

    // node_one.set_left(&node_two);
    // node_one.set_right(&node_three);

    // Node retrieved_node_one = node_one.left(); // This should retrieve the left node
    // Node retrieved_node_two = node_one.right(); // This should retrieve the right node
//----------------------------------------------------

    Squirrel cheeks = Squirrel("Cheeks");
    Node *root = createNode(cheeks); //adds data to node
    cout << root-> data.get_name() << endl; //prints stuff from root node

}