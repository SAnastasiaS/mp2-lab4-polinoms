#pragma once

struct Node
{
	Node *next;
	int value;

	Node(int _value = 0)
	{
		value = _value;
		next = 0;
	}
};

class List
{
private:
	Node *first;
public:
	List();
	static void Insert(Node* curNode, Node* insNode);//��� ������� � ����� ������� List
	Node* GetFirst();
	void InsertFirst(Node* node);
	~List();
	void DeleteFirst();
	static void DeleteNext(Node* curNode);
};