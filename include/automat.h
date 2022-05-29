#ifndef DB67CBD1_C918_411A_88E9_583D08C870B1
#define DB67CBD1_C918_411A_88E9_583D08C870B1

#include "DrinkSelector.h"
#include "PaymentSystem.h"

class Automat
{
public:
  DrinkSelector* mDS;
  PaymentSystem* mPS;
  void start();
  Automat();
  ~Automat();
};



#endif /* DB67CBD1_C918_411A_88E9_583D08C870B1 */
