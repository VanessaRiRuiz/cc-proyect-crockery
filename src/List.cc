#include "Stack.hh"

List::List(std::string crockery, int amount)
{
  this->crockery = crockery;
  this->amount = amount;
}

List::~List()
{
}


std::string List::GetCrockery() const
{
  return crockery;
}

int List::GetAmount() const
{
  return amount;
}
