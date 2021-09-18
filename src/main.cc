#include<iostream>
#include "List.hh"
#include "Stack.hh"

int main()
{

  List* type1{new List( "Bowl", 150)};

  List* type2{new List("Forks and spoons", 300)};

  List* type3{new List("Glass", 280)};

  List* type4{new List( "Salad plate", 150)};

  Stack* stack{new Stack()};
  stack->Push(type1);
  stack->Push(type2);
  stack->Push(type3);
  stack->Push(type4);
  stack->Print();

  stack->Pop();
  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

