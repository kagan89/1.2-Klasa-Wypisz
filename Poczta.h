#pragma  
#include <string.h>
#include <iostream>


  class Poczta{

  public:
  
  std::string nadawca = "Jan";
  std::string odbiorca = "Alina";
  std::string temat = "Zakupy";
  std::string tresc = "Dzis nalezy zrobic zakupy";  

Poczta();
~Poczta();
void wypisz()
  {
    std::cout<<"nadawca: "<< nadawca << std::endl;
    std::cout<<"odbiorca: "<< odbiorca << std::endl;
    std::cout<<"temat: "<< temat << std::endl;
    std::cout<<"tresc: "<< tresc << std::endl;
  };

  
};