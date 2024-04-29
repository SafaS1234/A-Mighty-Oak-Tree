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


class Node {
  private:
  Squirrel data;
  Node *left;
  Node *right;

  public:
    Node(Squirrel data)
    {
        this-> data = data;
        this-> left = nullptr;
        this-> right = nullptr;
    }
};

// struct node *newNode(Squirrel data) 
// {
//   //change this
//   struct node *node = (struct node *)malloc(sizeof(struct node));

//   node->data = data;

//   node->left = nullptr;
//   node->right = nullptr;
//   return (node);
// }

void traverseNode(struct node *temp) 
{
  if (temp != nullptr) {
    cout << " " << temp->data.get_name();
    traverseNode(temp->left);
    traverseNode(temp->right);
  }
}

int main()
{
  Squirrel cheeks = Squirrel("Cheeks");
  Node node_one = new Node(&cheeks);

  Squirrel squeaks = Squirrel("Squeaks");
  Node node_two = new Node(&squeaks);

  Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
  Node node_three = new Node(&fluffybutt);

  node_one.set_left(&node_two);
  node_one.set_right(&node_three);

  Node retrieved_node_one = node_one.left(); // This should retrieve the left node
  Node retrieved_node_two = node_one.right(); // This should retrieve the right node
  }