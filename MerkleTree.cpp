#include "MerkleTree.h"

#include <iostream> 
#include <cmath>
using namespace std;


/*
 * this function finds the given key in the Binary Tree
 * returns the node containing the key
 * returns NULL in case key is not present
 */
int find( int key)
{
  if (tree == NULL) 
  {
    return NULL;
  }
  if (tree->key == key)
  {
    return tree;
  }
  else if (key < tree->key)
  {
    return find(tree->left, key);
  }
  else
  {
    return find(tree->right, key);
  }
}

/* this function inserts the newly created node 
   in the existing Binary Tree */
void insertNum(Node *item)
{
 
  if (item->key < tree->key)
  {
    if (tree->left == NULL)
    {
      tree->left = item;
      return;
    }
    else
    {
      insert_element(tree->left, item);
      return;
    }
  }
 
  else if (item->key > tree->key)
  {
    if (tree->right == NULL)
    {
      tree->right = item;
      return;
    }
    else
    {
      insert_element(tree->right, item);
      return;
    }
  }
}
 
