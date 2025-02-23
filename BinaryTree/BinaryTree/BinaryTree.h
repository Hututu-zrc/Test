#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

template<class T>
struct BinaryTreeNode
{
	T _data = T();
	struct BinaryTreeNode<T>* _left = nullptr;
	struct BinaryTreeNode<T>* _right= nullptr;
	BinaryTreeNode(const BinaryTreeNode<T> & btn)
		:_data(btn._data)
		,_left(btn._left)
		,_right(btn._right)
	{}
	BinaryTreeNode(const T & val)
		:_data(val)
		,_left(nullptr)
		,_right(nullptr)
	{}
};

template <class T>
class BinaryTree
{
	typedef BinaryTreeNode<T>  Node;
public:
	BinaryTree() = default;
	
	
	BinaryTree(BinaryTree<T> & bt)
	{
		_root=Copy(bt._root);
	}
	// ����������
	~BinaryTree()
	{
		Destroy(_root);
	}
	 //ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
	void BinaryTreeCreate(const T* a, int n, int& pi)
	{
		this->_root = BTCreate( a, n,  pi);
	}
	
	
	// �������ڵ����
	int BinaryTreeSize()
	{
		return _BinaryTreeSize(_root);
	}
	// ������Ҷ�ӽڵ����
	int BinaryTreeLeafSize()
	{
		return _BinaryTreeLeafSize(_root);
	}
	// ��������k��ڵ����
	int BinaryTreeLevelKSize(size_t k)
	{
		return _BinaryTreeLevelKSize(_root, k);
	}
	// ����������ֵΪx�Ľڵ�
	Node*  BinaryTreeFind( T x)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_data > x)
				cur = cur->_right;
			else if (cur->_data < x)
				cur = cur->_left;
			else
				return cur;
		}
		return nullptr;
	}
	// ������ǰ����� 
	void BinaryTreePrevOrder()
	{
		_BinaryTreePrevOrder(_root);
		
	}
	// �������������
	void BinaryTreeInOrder()
	{
		_BinaryTreeInOrder(_root);
	}
	// �������������
	void BinaryTreePostOrder()
	{
		_BinaryTreePostOrder(_root);
	}
	// �������
	void BinaryTreeLevelOrder()
	{
		if (_root == nullptr)
			return;
		queue<Node*> q;
		q.push(_root);
		int oldsize = q.size();
		while (!q.empty())
		{
			for (int i = 0; i < oldsize; i++)
			{
				Node* cur = q.front();
				cout << cur->_data << " ";
				if(cur->_left!=nullptr)
					q.push(cur->_left);
				if (cur->_right != nullptr)
					q.push(cur->_right);
				q.pop();
			}
			oldsize = q.size();
		}
	}
	// �ж϶������Ƿ�����ȫ������
	bool BinaryTreeComplete()
	{
		if (_root == nullptr)
			return false;
		queue<Node*> q;
		q.push(_root);
		int oldsize = q.size();
		bool flag = false;
		while (!q.empty())
		{
			for (int i = 0; i < oldsize; i++)
			{
				Node* cur = q.front();
				if (cur == nullptr)
				{
					flag = true;
					q.pop();
					continue;
				}
				if (flag)
				{
					if (cur != nullptr)
						return false;
				}
				q.push(cur->_left);
				q.push(cur->_right);
				q.pop();
			}
			oldsize = q.size();
		}
		return true;
	}
	Node* Getroot()
	{
		return _root;
	}
private:
	// �������ڵ����
	int _BinaryTreeSize(Node *root)
	{
		if (root == nullptr)
			return 0;
		return 1 + (_BinaryTreeSize(root->_left) + _BinaryTreeSize(root->_right));
	}
	// ������Ҷ�ӽڵ����
	int _BinaryTreeLeafSize(Node* root)
	{
		if (root == nullptr)
			return 0;
		if (root->_left == nullptr && root->_right == nullptr)
			return 1;
		return _BinaryTreeLeafSize(root->_left) + _BinaryTreeLeafSize(root->_right);
	}
	// ��������k��ڵ����
	int _BinaryTreeLevelKSize(Node * root,size_t k)
	{
		if (root == nullptr)
			return 0;
		if (k == 1)
			return 1;
		return _BinaryTreeLevelKSize(root->_left, k - 1) + _BinaryTreeLevelKSize(root->_right, k - 1);
	}
	Node* BTCreate(const T* a, int n, int& pi)
	{
		if (pi >= n || a[(pi)] == '#')
		{
			++(pi);
			return nullptr;
		}

		Node* newnode = new Node(a[pi]);
		++(pi);
		newnode->_left = BTCreate(a, n, pi);
		newnode->_right = BTCreate(a, n, pi);
		return newnode;
	}
	// ������ǰ����� 
	void _BinaryTreePrevOrder(Node* root)
	{
		if (root == nullptr)
			return;
		cout << root->_data << " ";
		_BinaryTreePrevOrder(root->_left);
		_BinaryTreePrevOrder(root->_right);
	}
	// �������������
	void _BinaryTreeInOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_BinaryTreePrevOrder(root->_left);
		cout << root->_data << " ";

		_BinaryTreePrevOrder(root->_right);
	}
	// �������������
	void _BinaryTreePostOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_BinaryTreePrevOrder(root->_left);
		_BinaryTreePrevOrder(root->_right);
		cout << root->_data << " ";

	}
	Node* Copy(Node *root)
	{
		if (root ==  nullptr)
			return nullptr;
		Node *newroot = new Node(root->_data);
		newroot->_left = Copy(root->_left);
		newroot->_right = Copy(root->_right);
		return newroot;
	}
	void Destroy(Node* root)
	{
		if (root == nullptr)
			return;
		Destroy(root->_left);
		Destroy(root->_right);
		delete root;
		root = nullptr;
	}

	Node* _root = nullptr;
};

