#include "Test.h"
#include <iostream>
using namespace std;

Test::Test(Queue queue)
{
  q = queue;
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
}

Test::~Test()
{

}

bool Test::isEmpty()
{
  return(q.isEmpty());
}

bool Test::enqueue(int num)
{
  q.enqueue(num);
  return(true);
}


bool Test::dequeue()
{

  q.dequeue();
  return(true);
}

bool Test::peekFront()
{
  cout<<q.peekFront()<<"\n";
  return(true);

}


void Test::test1(){
  cout<<"Test 1: Newly created Queue is empty---------------------------------------------> ";
  if(q.isEmpty() == true){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}


void Test::test4(){
  cout<<"Test 4: isEmpty() returns false when queue has elements--------------------------> ";
  Queue temp;
  temp.enqueue(5);
  if(temp.isEmpty() == false){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}


void Test::test3(){
  cout<<"Test 3: isEmpty() returns true when queue is empty-------------------------------> ";
  Queue temp;
  if(temp.isEmpty() == true){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}


void Test::test6(){
  cout<<"Test 6: Enqueue adds element to the back of the queue----------------------------> ";
  Queue temp;
  temp.enqueue(1);

  if(temp.peekFront() == 1){
    temp.enqueue(2);
    if(temp.peekFront() == 1){
      cout<<"PASSED\n";
    }else{
        cout<<"FAILED\n";
    }
  }
}
void Test::test2(){
  cout<<"Test 2: ~Queue() deletes all entries in the queue--------------------------------> ";
  Queue temp;
  temp.enqueue(1);
  temp.enqueue(2);
  temp.~Queue();
  if(temp.isEmpty() == true){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test5(){
  cout<<"Test 5: Enqueing a value makes the Queue not empty-------------------------------> ";
  Queue temp;
  temp.enqueue(1);
  if(temp.isEmpty() == false){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test7(){
  cout<<"Test 7: Enqueue 5 on empty queue then peekFront returns 5------------------------> ";
  Queue temp;
  temp.enqueue(5);
  if(temp.peekFront() == 5){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test8(){
  cout<<"Test 8: Dequeue queue of 1 element empties the queue-----------------------------> ";
  Queue temp;
  temp.enqueue(10);
  temp.dequeue();
  if(temp.isEmpty() == true){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test9(){
  cout<<"Test 9: Dequeue removes the front of the queue in a queue with multiple elements-> ";
  Queue temp;
  temp.enqueue(1);
  temp.enqueue(2);
  temp.dequeue();
  if(temp.peekFront() == 2){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test10(){
  cout<<"Test 10: Dequeue an empty list throws an error-----------------------------------> ";
  Queue temp;
  try{
    temp.dequeue();
    cout<<"FAILED\n";
  }
  catch(...){
    cout << "PASSED\n";
  }
}
void Test::test11(){
  cout<<"Test 11: peekFront() returns front of 1 element queue----------------------------> ";
  Queue temp;
  temp.enqueue(1);
  if(temp.peekFront() == 1){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}
void Test::test12(){
  cout<<"Test 12: peekFront() returns front of multi-element queue------------------------> ";
  Queue temp;
  temp.enqueue(1);
  temp.enqueue(2);
  if(temp.peekFront() == 1){
    cout<<"PASSED\n";
  }else{
      cout<<"FAILED\n";
  }
}

void Test::test13(){
  cout<<"Test 13: peekFront() throws error if queue is empty------------------------------> ";
  Queue temp;
  try{
    temp.peekFront();
    cout<<"FAILED\n";
  }
  catch(...){
    cout << "PASSED\n";
  }
}
