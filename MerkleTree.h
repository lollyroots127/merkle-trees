#ifndef MERKLE_TREE_H
#define MERKLE_TREE_H

/* Class design for a basic binary merkle tree
 * Binary tree with each node having two children, and a hashkey which is the hashed value of the two child nodes
 *
 */


class MerkleTree
{

	private:
		/* Definition of a node in the tree
		 * Every node has a left and right child pointer and a pointer to the parent node
		 * Every node also has a hash key stored as an interger
		 * Default constructor puts all values -1 or nullptr, another constructor exists with a parameter list
		 */
		struct Node
		{
			Node *left;
			Node *right;
			int hashKey;
			Node *parent;

			Node()
			{
				hashKey = -1;
				left = nullptr;
				right = nullptr;
				parent = nullptr;
			};


			Node( int key = -1, Node* leftptr = nullptr, Node* rightptr = nullptr,Node* parentptr = nullptr)
				: hashKey{key}, left{leftptr},right{rightptr},parent{parentptr} {};
		};

		Node *Root;

	public:

		//Constructor
		MerkleTree();

		//Deconstructor
		~MerkleTree();

		/* Hashing function that will be used for every node
		 * num: interger number put into the hashing function
		 * output: a hashkey that represents the inputted number
		 *
		 */
		int hash(int num);


		/* Returns the root node of the tree
		 *
		 */
		Node* getRoot();

		/*
		 * this function finds the given key in the Binary Tree
		 * returns the node containing the key
		 * returns NULL in case key is not present
		 */
		int find( int key);

		/* Inserts a value into the tree, creating a node for it and updating all parent nodes
		 *
		 */
		void insertNum(const int num);


		/* Returns the hash key of the root node of the tree
		 * Compare this to the hash key of another tree to see if the two trees are the same
		 * output: hashKey of the Root node of the tree
		 *
		 */
		int getRootHash();


		/* Deletes a node from the tree, doing rotations if necessary and updating parent nodes
		 *
		 */
		void deleteNum(int num);


		/* Updates the hashkey for a parent node if any data in the child nodes has changed
		 * Call this when a subtree is changed, the root hash needs to change
		 * This function should call itself on the parent of the current node once it is done
		 */
		void updateHash(Node* ptr);








};

#endif
