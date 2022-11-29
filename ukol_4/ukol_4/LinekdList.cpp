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

void MyList::MakeList(int *p, int cnt)
{
	ListNode *pTmp, *pLast;
	pLast = pHead;
	for(int i = 0; i < cnt; i++)
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
	ListNode *pTmp = pHead;
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
	ListNode *pLast = pHead, *pItem;

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

bool MyList::Contains(ListNode *pNode)
{
	// todo 2b
	ListNode* pItem = pHead;

	// hledej prvek
	while (pItem != NULL && pItem != pNode /* ! */)
		pItem = pItem->pNext;

	return pItem != NULL;	
}

bool MyList::Test_Begin(ListNode* pNode)
{
	return pHead == pNode;//return false;
}

bool MyList::Test_End(ListNode* pNode)
{
	ListNode* pTmp = pHead;
	// najdi posledni prvek
	while (pTmp->pNext != NULL)
		pTmp = pTmp->pNext;
	return pNode == pTmp;
}

int MyList::Pocet_Prvku()
{
	int i = 0;
	ListNode* pTmp = pHead;
	while (pTmp != NULL) {
		i++;
		pTmp = pTmp->pNext;
	}
	return i;
}

// --

void MyList::Tisk_Prvky_BezKrajnichHodnot()
{
	;
}

void MyList::TiskReverse(ListNode *pItem)
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
	int i = 0;
	ListNode* pTmp = pHead;
	while (pTmp != NULL) {
		i += pTmp->value;
		pTmp = pTmp->pNext;
	}
	return i;
}

int MyList::SumaCisel_BezKrajnichHodnot()
{
	int i = 0;
	ListNode* pTmp = pHead;
	pTmp = pTmp->pNext; // preskoceni prvniho

	while (pTmp != NULL) {

		if(pTmp->pNext != NULL) i += pTmp->value;
		pTmp = pTmp->pNext;
	}
	return i;
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
	ListNode* pTmp = pHead; // temp Pointer na zacatek SpojSeznamu
	ListNode* min = pHead;

	while (pTmp != NULL) {
		if (min->value > pTmp->value) {
			min = pTmp;
		}
		pTmp = pTmp->pNext;
	}

	if (min == pHead)
		return;

	ListNode* pre_min = pHead; // Pointer
	pTmp = pHead->pNext;

	while (pTmp != NULL) {
		if (pre_min->pNext->value > pTmp->value) { // test: hodnota  následujícího prvku za pre_min není nejvìtší a pak posunem ukazujem na predchazejici prvek prvku minimalnimu
			pre_min = pTmp;
		}				
		pTmp = pTmp->pNext;
	}

	pTmp = pre_min->pNext;
	
	pre_min->pNext = pre_min->pNext->pNext;
	
	pTmp->pNext = pHead;
	pHead = pTmp;
}

void MyList::MoveMaxTail()
{
	// todo5 du
	ListNode* pTmp = pHead; // temp Pointer na zacatek SpojSeznamu
	ListNode* max = pHead;

	// projdeme cele pole a hledame max. hodotu
	while (pTmp != NULL) {
		if (max->value < pTmp->value) {
			max = pTmp;
		}
		pTmp = pTmp->pNext;
	}


	//std::cout << max->value << '\n';

	// 2   5   6   1   8   4
	ListNode* pTail = pHead;
	//
	for (int i = 0; i < this->Pocet_Prvku() - 1; i++) {
		pTail = pTail->pNext;
	}

	//std::cout << pTail->value << '\n';

	if (pTail->value == max->value) {
			return;
	}

	if (max == pHead) {
		pHead = pHead->pNext;
		pTail->pNext = max;
		max->pNext = NULL;
		return;
	}

	ListNode* pre_max = pHead;

	while (pre_max != NULL) {
		if (pre_max->pNext->value == max->value) { // test: hodnota  následujícího prvku za pre_min není nejvìtší a pak posunem ukazujem na predchazejici prvek prvku minimalnimu
			pTail->pNext = max;
			pre_max->pNext = pre_max->pNext->pNext;
			max->pNext = NULL;
			return;
		}
		pre_max = pre_max->pNext;
	}
}

int main() 
{
	MyList* ml = new MyList();
	for (int i=10; i>2; i--){
		ml->Add(i);
	}
	ml->Add(7);


	ml->Tisk();
	std::cout << std::endl;

	int pp = ml->Pocet_Prvku();
	std::cout << "Pocet prvku: " << pp << '\n';
	std::cout << std::endl;

	pp = ml->SumaCisel();
	std::cout << "Suma cisel: " << pp << '\n';
	std::cout << std::endl;

	pp = ml->SumaCisel_BezKrajnichHodnot();
	std::cout << "Suma cisel bez krajnich hodnot: " << pp << '\n';
	std::cout << std::endl;

	ml->MoveMinHead();
	ml->Tisk();
	std::cout << std::endl;
	std::cout << std::endl;

	ml->MoveMaxTail();
	ml->Tisk();
	std::cout << std::endl;
	return 0;

}
