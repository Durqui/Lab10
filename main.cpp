#include <iostream>
#include <string>
#include <algorithm>
#include "bst.h"
using namespace std;
int main()
{
	BST<string> tree;
	cout << "The height of an empty tree is " << tree.height() << endl;
	cout << "Enter six strings: ";
	for (int i = 0; i < 6; i++) {
		string s;
		cin >> s;
		tree.insert(s);
	}
	cout << "\nThe height of the tree is " << tree.height() << endl;
	tree.insert("Green");
	cout << "The height of the tree is " << tree.height() << endl;
	tree.preorder(); // Traverses the tree
	string names[] = { "Tom", "George", "Jean", "Jane", "Kevin", "Peter", "Susan",
	"Jen", "Kim", "Michael", "Michelle" };
	BST<string> tree1(names, 11);
	cout << "\nThe preorder traversal of tree1 is ";
	tree1.preorder();
	cout << "\nThe height of tree1 is " << tree1.height() << endl;
	int numbers[] = { 50, 45, 35, 48, 59, 51, 58 };
	BST<int> tree2(numbers, 7);
	cout << "The preorder traversal for tree2 is ";
	tree2.preorder();
	cout << "\nThe height of tree2 is " << tree2.height() << endl;
	//Uncomment this when your getNumberOfNonLeaves() method works.
	//cout << "\nNumber of non-leaves nodes in tree1: " <<
	tree1.getNumberOfNonLeaves() << endl;
	//cout << "Number of non-leaves nodes in tree2: " << tree2.getNumberOfNonLeaves()
	<< endl;
	return 0;
}