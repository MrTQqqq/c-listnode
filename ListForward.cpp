#include "ListForward.h"

//获取
int ListForward::get(int index)
{
	int i = 0;
	ListNode* p = head;
	while (p&& i < index)
	{
		p = p->next;
		i++;
	}

	if (p)
	{
		return p->val;
	}
	
	return -1;
}

//头部增加
void ListForward::addHead(int val)
{
	ListNode* p = new ListNode(val);
	p->next = head;
	head = p;

}
//尾部增加
void ListForward::addAtTail(int val)
{
	ListNode* p = new ListNode(val);
	
	if (head == nullptr)
	{
		head = p;
		return;
	}
	//头节点只是用来记录的，这一点要搞清楚
	ListNode* q = head;
	//遍历节点到尾部
	while (q->next)
	{
		q = q->next;
	}
	q->next = p;

}
//增加节点
void ListForward::addAtIndex(int index, int val)
{
	//首先创建一个node
	ListNode* cur = new ListNode(val);
	//特殊情况
	if (index <= 0)
	{
		cur->next = head;
		head = cur;
		return;
	}

	int i = 0;

	ListNode* prev = head;

	while (prev && i < index - 1)
	{
		prev = prev->next;
		i = i + 1;
	}

	if (prev)
	{
		cur->next = prev->next;
		prev->next = cur;
	}
}

//删除链表节点
void ListForward::deleteAtIndex(int index)
{
	//判断为0的情况
	if (index == 0&& head != nullptr)
	{
		ListNode* del = head;
		head = head->next;
		delete del;
		return;
	}


	int i = 0;
	
	ListNode* p = head;
	while (p && i < index - 1)
	{
		p = p->next;
		++i;
	}

	if (!p)
	{
		return;
	}

	if (p->next)
	{
		ListNode* del = p->next;
		p->next = del->next;
		delete del;
	}
}

//返回链表长度
int ListForward::length()
{
	int i = 0;

	ListNode* p = head;
	while (p)
	{	
		i++;
		p = p->next;
	}
	return i;
}
