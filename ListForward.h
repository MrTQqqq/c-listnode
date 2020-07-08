#pragma once
class ListForward
{
private:
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode(int x) :val(x), next(nullptr) {};
	};
	ListNode* head;
public:
	ListForward() :head(nullptr)
	{

	}

	int get(int index);

	void addHead(int val);

	void addAtTail(int val);

	void addAtIndex(int index, int val);

	void deleteAtIndex(int index);

	int length();




};

