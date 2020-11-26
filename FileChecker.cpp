// Program that copies a folder of files into another directory and verifies if the files sent are the same as the ones in current directory.
// First, it creates a clone of the merkel tree using the root node.
// Then, it will have to ensure that the files copied are exactly the same and there was no issue in the cloning process by comparing root nodes.

#include "FileChecker.h"
#include "MerkleTree.h"
#include <iostream>

using namespace std;


/**
 * Function that does a deep copy
 */
/* Node * FileChecker::clone( Node *t) const
    {
      //implement here
      if (t == NULL) return NULL;
      BinaryNode *copyNode = new BinaryNode(t->element,NULL,NULL);

      copyNode->left = clone(t->left);
      copyNode->right = clone(t->right);
      return copyNode;
    }*/

/**
 * Function that performs a deep copy of the tree into another pre-existing tree
 */
// Node * FileChecker::compareHashRoot(MerkleTree * tree1, MerkleTree * tree2){

}
