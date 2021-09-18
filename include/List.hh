#pragma once

#include<string>

class List
{

  private:

    std::string crockery;
    int amount;

  public:
    List( std::string crockery,  int amount);
    ~List();

    std::string GetCrockery() const;
    int GetAmount() const;

};
