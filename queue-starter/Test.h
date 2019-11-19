#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>

class Test
{
public:
  Test(Queue q);
  ~Test();
  bool isEmpty();
  bool enqueue(int num);
  bool dequeue();
  bool peekFront();

  //TESTS

  //checks if creates an empty queue
  void test1();
  //checks if isEmpty() returns true when queue has elements
  void test2();
  //checks if
  void test3();
  //checks if
  void test4();
  //checks if
  void test5();
  //checks if
  void test6();
  //checks if
  void test7();
  //checks if
  void test8();
  //checks if
  void test9();
  //checks if
  void test10();
  //checks if
  void test11();
  //checks if
  void test12();
  //checks if
  void test13();




private:
  Queue q;

};
#endif
