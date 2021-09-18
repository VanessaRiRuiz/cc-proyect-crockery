#pragma once

#include<string>

class List
{

  private:

    std::string type;
    std::string crockery;
    int amount;

  public:
  
    List(std::string type, std::string crockery,  int amount);
    ~List();
    std::string GetType() const;
    std::string GetCrockery() const;
    int GetAmount() const;

};
