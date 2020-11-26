#include "MerkleTree.h"

#include <iostream>
#include <cmath>
using namespace std;

// Default Constructor
MerkleTree::MerkleTree( )
{
  Root = new Node;
}


/*
 * this function finds the given key in the Binary Tree
 * returns the node containing the key
 * returns NULL in case key is not present
 */
int find( int key)
{
 // tree = new Node( -1, NULL, NULL,NULL);

  if (key == NULL)
  {
    return NULL;
  }
 /* if (Root->key == key)
  {
    return Root;
  }
  else if (key < Root->key)
  {
   // return find(tree->left, key);
  }
  else
  {*/
  //  return find(tree->right, key);

}

/* this function inserts the newly created node
   in the existing Binary Tree */
void insertNum(int item)
{/*
  tree = Root;

  if (item->key < tree->key)
  {
    if (tree->left == NULL)
    {
      tree->left = item;
      return;
    }
    else
    {
      insertNum(tree->left, item);
      return;
    }
  }

  else if (item->key > tree->key)
  {
    if (tree->right == NULL)
    {
      tree->right = item;

    }
    else
    {
      insertNum(tree->right, item);
      return;
    }*/
  }
}

/* Returns the hash key of the root node of the tree
 * Compare this to the hash key of another tree to see if the two trees are the same
 * output: hashKey of the Root node of the tree
 *
 */
int getRootHash()
{
  return 0;
}

/* Deletes a node from the tree, doing rotations if necessary and updating parent nodes
 *
 */
void deleteNum(int num)
{

}

/* Updates the hashkey for a parent node if any data in the child nodes has changed
 * Call this when a subtree is changed, the root hash needs to change
 * This function should call itself on the parent of the current node once it is done
 */
void updateHash(Node* ptr)
{

}
