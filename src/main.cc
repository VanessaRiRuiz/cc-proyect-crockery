#include<iostream>
#include "List.hh"
#include "Stack.hh"

int main()
{

  List* object1{new List("Ceramics", "Bowl", 150)};

  List* object2{new List("Iron", "Forks and spoons", 300)};

  List* object3{new List("Glass", "Glass", 280)};

  List* object4{new List("Porcelain ", "Salad plate", 150)};

  Stack* stack{new Stack()};
  stack->Push(object1);
  stack->Push(object2);
  stack->Push(object3);
  stack->Push(object4);
  stack->Print();

  stack->Pop(); //borrar el primero
  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

