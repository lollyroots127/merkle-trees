// Program that copies a folder of files into another directory and verifies if the files sent are the same as the ones in current directory.
// First, it creates a clone of the merkel tree using the root node.
// Then, it will have to ensure that the files copied are exactly the same and there was no issue in the cloning process by comparing root nodes.


#include "MerkleTree.h"
#include <iostream>

using namespace std;


/**
 * Function does a deep copy of the tree onto a pre-exisiting tree
 * Returns a reference to the newly copied node
 */
Node * clone( Node *t) const
    {
      //implement here
      if (t == NULL) return NULL;
      BinaryNode *copyNode = new BinaryNode(t->element,NULL,NULL);

      copyNode->left = clone(t->left);
      copyNode->right = clone(t->right);
      return copyNode;
    }

/**
 * Function that takes the input of pointers to two trees and compares their hashkeys at the root node
 * Returns a reference to the root node if they have the same hashkey
 */
Node * compareHashRoot(MerkleTree * tree1, MerkleTree * tree2){

}
