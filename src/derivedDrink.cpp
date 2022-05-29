#include "../include/derivedDrink.h"

Fanta ::Fanta (): BaseDrink(2.0)
{
  setName(__func__);
}

Fanta ::~Fanta ()
{
}

std::string Fanta::Ingredients(){
  return std::string("Secret Recepie Orange, 30gm Sugar");
}


Cocacola::Cocacola(): BaseDrink(2.5)
{
    setName(__func__);
}

Cocacola::~Cocacola()
{
}

std::string Cocacola::Ingredients(){
  return std::string("Secret Recepie Cola, 30gm Sugar");
}



Pepsi::Pepsi():BaseDrink(3.5)
{
  setName(__func__);
}

Pepsi::~Pepsi()
{
}

std::string Pepsi::Ingredients(){
  return std::string("Secret Recepie Indian Cola, 30gm Sugar");
}

Water::Water():BaseDrink(0.0)
{
  setName(__func__);
}

Water::~Water()
{
}

std::string Water::Ingredients(){
  return std::string("Plain simple refresing");
}

