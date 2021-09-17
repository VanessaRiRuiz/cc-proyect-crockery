#include "Stack.hh"

List::List(std::string type, std::string crockery, int amount)
{
  this->type = type;
  this->crockery = crockery;
  this->amount = amount;
}

List::~List()
{
}

std::string List::GetType() const
{
  return type;
}

std::string List::GetCrockery() const
{
  return crockery;
}

int List::GetAmount() const
{
  return amount;
}
