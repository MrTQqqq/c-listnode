#include "ListForward.h"

//��ȡ
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

//ͷ������
void ListForward::addHead(int val)
{
	ListNode* p = new ListNode(val);
	p->next = head;
	head = p;

}
//β������
void ListForward::addAtTail(int val)
{
	ListNode* p = new ListNode(val);
	
	if (head == nullptr)
	{
		head = p;
		return;
	}
	//ͷ�ڵ�ֻ��������¼�ģ���һ��Ҫ�����
	ListNode* q = head;
	//�����ڵ㵽β��
	while (q->next)
	{
		q = q->next;
	}
	q->next = p;

}
//���ӽڵ�
void ListForward::addAtIndex(int index, int val)
{
	//���ȴ���һ��node
	ListNode* cur = new ListNode(val);
	//�������
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

//ɾ������ڵ�
void ListForward::deleteAtIndex(int index)
{
	//�ж�Ϊ0�����
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

//����������
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
