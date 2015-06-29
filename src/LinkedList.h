#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct Element_t Element;

typedef struct {
	Element *head;
	Element *tail;
	int length;
}LinkedList;

typedef struct Element_t{
	struct Element_t *next;
	int data;
}Element;

LinkedList *createLinkedList();

void listAddLast(LinkedList *list,Element *element);
Element *listRemoveLast(LinkedList *list);
void listAddFirst(LinkedList *list,Element *element);
Element *listRemoveFirst(LinkedList *list);

#endif //__LINKED_LIST_H__