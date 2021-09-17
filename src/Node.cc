#include "Node.hh"

Node::Node(List*& list)
{
  this->list = list;
}

Node::~Node()
{
}

List* Node::GetList() const
{
  return list;
}