// Program that copies a folder of files into another directory and verifies if the files sent are the same as the ones in current directory.
// First, it creates a clone of the merkel tree using the root node.
// Then, it will have to ensure that the files copied are exactly the same and there was no issue in the cloning process by comparing root nodes.

#include <iostream>
#include <fstream>
#include "MerkleTree.h"
#include "FileChecker.h"
using namespace std;



int main( )
{
  
  int choice, key, value, n, c;
  string file;
 

    cout << "Implementation of Merkle Tree" << endl;
    cout << "We will be duplicating the contents of entered file in another directory" ;
     
          
    MerkleTree t;
  
    cout << "Inserting file with data e.g( ***.txt)" << endl;
    cout << "Enter file name then key-:    ";
    cin >> file >> key;

    ifstream fin( file );
    if ( fin.is_open() )
    {
        double x; 
        int i;
      while ( fin >> x ){
        t.insertNum(x);
      }
    }
        
  return 0;
  
  
}
