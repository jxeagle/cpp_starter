#include "Person.cpp"
#include <iostream>

int main()
{
  Person p1("Elias", "Xu", 0316);
  {
    Person p2;
  }
  std::cout << "after innermost block" << std::endl;
  std::string name = p1.getName();

  return 0;
}
