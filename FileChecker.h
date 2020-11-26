#ifndef FILE_CHECKER_H
#define FILE_CHECKER_H

class FileChecker
{

    public:

    //Function that takes the input of pointers to two trees and compares their hashkeys at the root node
    void compareHashRoot(MerkleTree * tree1,MerkleTree * tree2);

    //Function that performs a deep copy of the tree into another pre-existing tree
    void clone( MerkleTree *t) const;


}

#endif
