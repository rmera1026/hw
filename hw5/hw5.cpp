#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node* left;
  struct node* right;
};

struct node* newNode(int idata)
{
  struct node* node = new struct node;
  node->data = idata;
  node->left = NULL;
  node->right = NULL;
  return node;
}

int main ()
{
  struct node *root = newNode(8);
  root->left = newNode(9);
  root->right = newNode(3);
  cout<< "Steps in tree are as followed:\n";
  root->left->left = newNode(272511594);
  cout << root->left->left->data << endl;
  return 0;
}
