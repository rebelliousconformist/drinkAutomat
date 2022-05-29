#ifndef EED36AF4_C1AF_4F6D_87B0_72DCC7F90CE0
#define EED36AF4_C1AF_4F6D_87B0_72DCC7F90CE0

#include "baseDrink.h"

class Fanta : public BaseDrink
{
  
public:
  Fanta ();
  std::string Ingredients();
  ~Fanta ();
};

class Cocacola : public BaseDrink
{
private:
  /* data */
public:
  Cocacola(/* args */);
  std::string Ingredients();
  ~Cocacola();
};


class Pepsi: public BaseDrink
{
private:
  /* data */
public:
  Pepsi(/* args */);
  std::string Ingredients();
  ~Pepsi();
};


class Water : public BaseDrink
{
  public:
  Water();
  std::string Ingredients();
  ~Water();
};






#endif /* EED36AF4_C1AF_4F6D_87B0_72DCC7F90CE0 */
