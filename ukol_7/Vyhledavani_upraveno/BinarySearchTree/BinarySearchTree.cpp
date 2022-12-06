// BinarySearchTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Node.h"
#include "BST.h"

void printTreeInTreeForm(Node *node)
{
	if (node == NULL)
	{
		cout << 'x';
		return;
	}
	cout << node->key << '(';
	printTreeInTreeForm(node->pLeft);
	cout << ',';
	printTreeInTreeForm(node->pRight);
	cout << ')';
}


int _tmain(int argc, _TCHAR* argv[])
{
	BST t;

	t.insert(6);
	t.insert(4);
	t.insert(8);
	t.insert(5);
	t.insert(7);
	t.insert(3);
	t.insert(9);

	printTreeInTreeForm(t.GetRoot());
	cout << endl << endl;

	t.Del(t.Search(3));
	t.Del(t.Search(4));
	t.Del(t.Search(8));
	t.Del(t.Search(6));
	printTreeInTreeForm(t.GetRoot());
	cout << endl << endl;

	return 0;
}

