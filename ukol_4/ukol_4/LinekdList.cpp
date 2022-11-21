#include <iostream>
#include "LinkedList.h"

ListNode::ListNode(int value)
{
	this->value = value;
	this->pNext = NULL;
}

// ---------------------------------------------------

MyList::MyList()
{
	pHead = NULL;
}

MyList::~MyList()
{
	ListNode* pTmp;
	while (pHead != NULL)
	{
		pTmp = pHead;
		pHead = pHead->pNext;
		delete pTmp; pTmp = NULL;
	}
}

bool MyList::IsEmpty() const
{
	return (pHead == NULL);
}

void MyList::MakeList(int* p, int cnt)
{
	ListNode* pTmp, * pLast;
	pLast = pHead;
	for (int i = 0; i < cnt; i++)
	{
		pTmp = new ListNode(*(p + i) /* p[i] */);
		if (pHead == NULL)
			pHead = pLast = pTmp;
		else
		{
			pLast->pNext = pTmp;
			pLast = pTmp;
		}
	}
}

void MyList::Tisk() const
{
	// todo 1
	ListNode* pTmp = pHead;
	while (pTmp != NULL)
	{
		printf("%d;", pTmp->value);
		pTmp = pTmp->pNext;
	}
}

void MyList::Add(int value)
{
	// todo 4 (samostatny ukol)
	// Klicove pripady:
	// -- prazdny seznam
	// -- neprazdny seznam - vice prvku
	// -- neprazdny seznam - jeden prvek
	ListNode* pLast = pHead, * pItem;

	pItem = new ListNode(value);
	//pItem->pNext = NULL;

	if (pHead == NULL)
		pHead = pItem;
	else
	{
		while (pLast->pNext != NULL)
			pLast = pLast->pNext;
		pLast->pNext = pItem;
	}

}

void MyList::AddHead(int value)
{
	// todo 3 (samostatny ukol)
	// Klicove pripady:
	// -- prazdny seznam
	// -- neprazdny seznam, jeden prvek / vice prvku
	ListNode* pItem = new ListNode(value);
	pItem->pNext = pHead;
	pHead = pItem;
}

bool MyList::Remove(int value)
{
	// Klicove pripady: 
	// -- prazdny seznam, 
	// -- odstranuje se prvni prvek seznamu, odstranuje se posledni prvek seznamu, odstranuje se vnitrni prvek seznamu
	// -- prvek s odstranovanou hodnotou neexistuje
	ListNode* pPrev = NULL;  // inicializace kvuli prekladaci
	ListNode* pItem = pHead;

	// hledej prvek
	while (pItem != NULL && pItem->value != value)
	{
		pPrev = pItem;
		pItem = pItem->pNext;
	}

	if (pItem != NULL)
	{
		// Pokud jsi nasel, proved odstraneni.
		if (pHead == pItem)
		{
			// odstranuje se prvni prvek seznamu
			pHead = pItem->pNext;
			//delete pItem;
		}
		else
		{
			// odstranuje se prvek seznamu, ktery neni prvni
			pPrev->pNext = pItem->pNext;
			//delete pItem;
		}
		delete pItem;
		return true;
	}
	else
		return false;
}

bool MyList::Contains(int value)
{
	// todo 2a (samostatny ukol)
	// Klicove pripady:
	// -- prazdny seznam
	// -- neprazdny seznam, jeden prvek / vice prvku
	ListNode* pItem = pHead;

	// hledej prvek
	while (pItem != NULL && pItem->value != value)
		pItem = pItem->pNext;

	return pItem != NULL;
	/*
	if (pItem != NULL)
		return true;
	else
		return false;
		*/
}

bool MyList::Contains(ListNode* pNode)
{
	// todo 2b
	ListNode* pItem = pHead;

	// hledej prvek
	while (pItem != NULL && pItem != pNode /* ! */)
		pItem = pItem->pNext;

	return pItem != NULL;
	return false;
}

bool MyList::Test_Begin(ListNode* pNode)
{
	return false;
}

bool MyList::Test_End(ListNode* pNode)
{
	return false;
}

int MyList::Pocet_Prvku()
{
	return -1;
}

// --

void MyList::Tisk_Prvky_BezKrajnichHodnot()
{
	;
}

void MyList::TiskReverse(ListNode* pItem)
{
	// todo 6
	if (pItem == NULL)
		return;
	//printf("%d;", pHead->value);
	TiskReverse(pItem->pNext);
	printf("%d;", pItem->value);
}

void MyList::TiskReverse()
{
	// todo 7
	TiskReverse(pHead);
}

int MyList::SumaCisel()
{
	// todo du
	return 0;
}

int MyList::SumaCisel_BezKrajnichHodnot()
{
	return 0;
}

int MyList::PocetRuznych()
{
	return 0;
}

void MyList::RemoveLiche()
{

}

void MyList::AddSudeMultiple()
{

}

void MyList::MoveMinHead()
{
	// todo du
}

void MyList::MoveMaxTail()
{
	// todo du
}

int main()
{
	std::cout << "FIRST RUN \n";
}
