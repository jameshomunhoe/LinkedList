#include "unity.h"
#include "LinkedList.h"
#include <malloc.h>


void setUp(){}
void tearDown(){}

void test_createLinkedList_should_return_initialized_LinkedList_object(){
	LinkedList *list;

	list = createLinkedList();
	TEST_ASSERT_NOT_NULL(list);
	TEST_ASSERT_NULL(list->head);
	TEST_ASSERT_NULL(list->tail);
	TEST_ASSERT_EQUAL(0,list->length);
}




void test_listAddLast_should_add_a_new_element_to_the_LinkedList()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
	testElement->data =num1; 
	listAddLast(list,testElement);
	TEST_ASSERT_EQUAL(1,(int*)list->head->data);
	TEST_ASSERT_EQUAL(1,list->length);
	TEST_ASSERT_EQUAL(list->head,list->tail);
	TEST_ASSERT_NULL(list->head->next);
	
  // 2nd element, velue is 2
	testElement2->data =num2;
	listAddLast(list,testElement2); 
	TEST_ASSERT_EQUAL(2,(int*)list->tail->data);
	TEST_ASSERT_EQUAL(2,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	
	// 2nd element, velue is 3
	testElement3->data =num3;
	listAddLast(list,testElement3); 
	TEST_ASSERT_EQUAL(3,(int*)list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
}

void test_listRemoveLast_should_remove_element_from_the_LinkedList()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
  Element *rmElement = malloc(sizeof(Element));
	Element *rmElement2 = malloc(sizeof(Element));
	Element *rmElement3 = malloc(sizeof(Element));
  
	testElement->data =num1; 
	testElement2->data =num2;
	testElement3->data =num3;
  
	listAddLast(list,testElement);
	listAddLast(list,testElement2); 
	listAddLast(list,testElement3); 
  
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(2,list->head->next->data);
  TEST_ASSERT_EQUAL(3,list->head->next->next->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
  
  
  rmElement = listRemoveLast(list);
  
  TEST_ASSERT_EQUAL(3,rmElement->data);
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(2,list->head->next->data);
  TEST_ASSERT_EQUAL(2,list->tail->data);
	TEST_ASSERT_EQUAL(2,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next);
  
  rmElement2 = listRemoveLast(list);
  
  TEST_ASSERT_EQUAL(2,rmElement2->data);
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(1,list->tail->data);
	TEST_ASSERT_EQUAL(1,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next);
  
  rmElement3 = listRemoveLast(list);
  
  TEST_ASSERT_EQUAL(1,rmElement3->data);
	TEST_ASSERT_EQUAL(0,list->length);
	TEST_ASSERT_NULL(list->head);
	TEST_ASSERT_NULL(list->tail);
}

void test_listAddFirst_should_add_element_from_the_LinkedList()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
  
  testElement->data =num1; 
	listAddFirst(list,testElement);
	TEST_ASSERT_EQUAL(1,list->head->data);
	TEST_ASSERT_EQUAL(1,list->tail->data);
	TEST_ASSERT_EQUAL(1,list->length);
	TEST_ASSERT_EQUAL(list->head,list->tail);
	TEST_ASSERT_NULL(list->head->next);
  
  // 2nd element, velue is 2
	testElement2->data =num2;
	listAddFirst(list,testElement2); 
	TEST_ASSERT_EQUAL(2,list->head->data);
	TEST_ASSERT_EQUAL(1,list->tail->data);
	TEST_ASSERT_EQUAL(2,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	
	// 2nd element, velue is 3
	testElement3->data =num3;
	listAddFirst(list,testElement3); 
	TEST_ASSERT_EQUAL(3,list->head->data);
	TEST_ASSERT_EQUAL(2,list->head->next->data);
	TEST_ASSERT_EQUAL(1,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
 
 
}

void test_listRemoveFirst_should_remove_element_from_the_LinkedList()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
  Element *rmElement = malloc(sizeof(Element));
	Element *rmElement2 = malloc(sizeof(Element));
	Element *rmElement3 = malloc(sizeof(Element));
  
	testElement->data =num1; 
	testElement2->data =num2;
	testElement3->data =num3;
  
	listAddLast(list,testElement);
	listAddLast(list,testElement2); 
	listAddLast(list,testElement3); 
  
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(2,list->head->next->data);
  TEST_ASSERT_EQUAL(3,list->head->next->next->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
  
  
  rmElement = listRemoveFirst(list);
  
  TEST_ASSERT_EQUAL(1,rmElement->data);
  TEST_ASSERT_EQUAL(2,list->head->data);
  TEST_ASSERT_EQUAL(3,list->head->next->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(2,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next);
  
  rmElement2 = listRemoveFirst(list);
  
  TEST_ASSERT_EQUAL(2,rmElement2->data);
  TEST_ASSERT_EQUAL(3,list->head->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(1,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next);
  
  rmElement3 = listRemoveFirst(list);
  
  TEST_ASSERT_EQUAL(3,rmElement3->data);
	TEST_ASSERT_EQUAL(0,list->length);
	TEST_ASSERT_NULL(list->head);
	TEST_ASSERT_NULL(list->tail);
}

void test_sort_last_element_to_first()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
  
	testElement->data =num1; 
	testElement2->data =num2;
	testElement3->data =num3;
  
	listAddLast(list,testElement);
	listAddLast(list,testElement2); 
	listAddLast(list,testElement3); 
  
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(2,list->head->next->data);
  TEST_ASSERT_EQUAL(3,list->head->next->next->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
  
  //removeLast, sort to first
  listAddFirst(list,listRemoveLast(list));
  
  TEST_ASSERT_EQUAL(3,list->head->data);
  TEST_ASSERT_EQUAL(1,list->head->next->data);
  TEST_ASSERT_EQUAL(2,list->head->next->next->data);
  TEST_ASSERT_EQUAL(2,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
}

void test_sort_first_element_to_last()
{
	LinkedList *list;
	list = createLinkedList();
	int num1=1,num2=2,num3=3;
	Element *testElement = malloc(sizeof(Element));
	Element *testElement2 = malloc(sizeof(Element));
	Element *testElement3 = malloc(sizeof(Element));
  
	testElement->data =num1; 
	testElement2->data =num2;
	testElement3->data =num3;
  
	listAddLast(list,testElement);
	listAddLast(list,testElement2); 
	listAddLast(list,testElement3); 
  
  TEST_ASSERT_EQUAL(1,list->head->data);
  TEST_ASSERT_EQUAL(2,list->head->next->data);
  TEST_ASSERT_EQUAL(3,list->head->next->next->data);
  TEST_ASSERT_EQUAL(3,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement2, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
  
  //removeLast, sort to first
  listAddLast(list,listRemoveFirst(list));
  
  TEST_ASSERT_EQUAL(2,list->head->data);
  TEST_ASSERT_EQUAL(3,list->head->next->data);
  TEST_ASSERT_EQUAL(1,list->head->next->next->data);
  TEST_ASSERT_EQUAL(1,list->tail->data);
	TEST_ASSERT_EQUAL(3,list->length);
	TEST_ASSERT_NULL(list->tail->next);
	TEST_ASSERT_EQUAL_PTR(testElement3, list->head->next);
	TEST_ASSERT_EQUAL_PTR(testElement, list->head->next->next);
	TEST_ASSERT_EQUAL_PTR(NULL, list->head->next->next->next);
}