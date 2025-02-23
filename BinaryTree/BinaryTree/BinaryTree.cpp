#include "BinaryTree.h"

void test01()
{
	char a[] = "ABD##E#H##CF##G##";

	int size = sizeof(a) / sizeof(char);
	string str = "ABD##E#H##CF##G##";
	BinaryTree<char> bt;
	int pos = 0;
	bt.BinaryTreeCreate(a, size, pos);
	bt.BinaryTreeInOrder();
	cout << endl;
	cout << "BinaryTreeSize: " << bt.BinaryTreeSize() << endl;
	cout << "BinaryTreeLeafSize: " << bt.BinaryTreeLeafSize() << endl;
	cout << "BinaryTreeLevelKSize: " << bt.BinaryTreeLevelKSize(2) << endl;
	BinaryTreeNode<char>* node = bt.BinaryTreeFind('A');
	if (node != nullptr)
		cout << node->_data << endl;
	if (bt.BinaryTreeComplete())
	{
		cout << "��ȫ������!" << endl;
	}
	else
	{
		cout << "������ȫ������!" << endl;
	}

	cout << "�������:";
	bt.BinaryTreeLevelOrder();
}
int main()
{
	test01();
	return 0;
}