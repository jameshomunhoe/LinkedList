#include "unity.h"
#include "LinkedList.h"




void setUp(){}

void tearDown(){}



void test_createLinkedList_should_return_initialized_LinkedList_object(){

 LinkedList *list;



 list = createLinkedList();

 if ((((list)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)13);;};

 if ((((list->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)14);;};

 if ((((list->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)15);;};

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)(((int*)list->head->data)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((list->head)), (_U_SINT)((list->tail)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

 if ((((list->head->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)35);;};





 testElement2->data =num2;

 listAddLast(list,testElement2);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)(((int*)list->tail->data)), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)42);;};





 testElement3->data =num3;

 listAddLast(list,testElement3);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)(((int*)list->tail->data)), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)49);;};

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



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)74, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)75, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)76, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)77);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_HEX32);





  rmElement = listRemoveLast(list);



  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((rmElement->data)), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)90);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)91, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_HEX32);



  rmElement2 = listRemoveLast(list);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rmElement2->data)), (((void *)0)), (_U_UINT)96, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)99, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)100);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)101, UNITY_DISPLAY_STYLE_HEX32);



  rmElement3 = listRemoveLast(list);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((rmElement3->data)), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)106, UNITY_DISPLAY_STYLE_INT);

 if ((((list->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)107);;};

 if ((((list->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)108);;};

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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)122, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)123, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)124, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((list->head)), (_U_SINT)((list->tail)), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);

 if ((((list->head->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)126);;};





 testElement2->data =num2;

 listAddFirst(list,testElement2);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)131, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)133, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)134);;};





 testElement3->data =num3;

 listAddFirst(list,testElement3);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)139, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)140, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)141, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)142, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)143);;};





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



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)171, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)172, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)173);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)174, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)175, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)176, UNITY_DISPLAY_STYLE_HEX32);





  rmElement = listRemoveFirst(list);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((rmElement->data)), (((void *)0)), (_U_UINT)181, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)182, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)183, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)185, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)186);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)187, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_HEX32);



  rmElement2 = listRemoveFirst(list);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((rmElement2->data)), (((void *)0)), (_U_UINT)192, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)193, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)195, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)196);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_HEX32);



  rmElement3 = listRemoveFirst(list);



  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((rmElement3->data)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)202, UNITY_DISPLAY_STYLE_INT);

 if ((((list->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)203);;};

 if ((((list->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)204);;};

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



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)224, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)225, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)226, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)227, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)228, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)229);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)230, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)231, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)232, UNITY_DISPLAY_STYLE_HEX32);





  listAddFirst(list,listRemoveLast(list));



  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)237, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)238, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)239, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)240, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)241, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)242);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)243, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)244, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)245, UNITY_DISPLAY_STYLE_HEX32);

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



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)265, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)266, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)267, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)268, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)269, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)270);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement2)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)271, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)272, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)273, UNITY_DISPLAY_STYLE_HEX32);





  listAddLast(list,listRemoveFirst(list));



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((list->head->data)), (((void *)0)), (_U_UINT)278, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->head->next->data)), (((void *)0)), (_U_UINT)279, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->head->next->next->data)), (((void *)0)), (_U_UINT)280, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((list->tail->data)), (((void *)0)), (_U_UINT)281, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((list->length)), (((void *)0)), (_U_UINT)282, UNITY_DISPLAY_STYLE_INT);

 if ((((list->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)283);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement3)), (_U_SINT)(_UP)((list->head->next)), (((void *)0)), (_U_UINT)284, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((testElement)), (_U_SINT)(_UP)((list->head->next->next)), (((void *)0)), (_U_UINT)285, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((((void *)0))), (_U_SINT)(_UP)((list->head->next->next->next)), (((void *)0)), (_U_UINT)286, UNITY_DISPLAY_STYLE_HEX32);

}
