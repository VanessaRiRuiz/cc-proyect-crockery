
#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

void Stack::Pop()
{

  if(IsEmpty())
  {
    std::cout << "Crockery list is empty" << std::endl;
  }

  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }

}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(List*& list)
{

  if(IsEmpty())
  {
    head = new Node(list);
  }

  else
  {
    Node* back{head};
    head = new Node(list);
    head->next = back;
  }

}

void Stack::Print()
{

  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }

  else
  {
    Node* current{head};

    std::cout << "Crockery Italian Restaurant:"<< std::endl;
    std::cout << std::endl;

    

    while (current)
    {
      std::cout << "Material: " << current->GetList()->GetType() << std::endl;
      std::cout << "Crockery: " << current->GetList()->GetCrockery() << std::endl;
      std::cout << "Amount: " << current->GetList()->GetAmount() << std::endl;
      std::cout << std::endl;
      current = current->next;
      
    }


    
  }
}
