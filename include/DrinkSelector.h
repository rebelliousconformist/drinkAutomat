#ifndef E769D7A3_B3DD_4F4C_9532_3B4BB2365A6D
#define E769D7A3_B3DD_4F4C_9532_3B4BB2365A6D

#include <string>
#include "namespaces.h"
#include "baseDrink.h"
#include "derivedDrink.h"
#include <iostream>
#include <iomanip>

class DrinkSelector
{
private:
  BaseDrink *mDrink = nullptr;
  int mUserDrink ;
  void printMenu();
  
  void clearDrink();
public:
  DrinkSelector();
  ~DrinkSelector();

  void setDrink(drinkNS::softDrink);
  void pollDrink();
  std::string getSelectedDrinkName();
  void printDrinkIngredients();
  float getDrinkValue();
  
};

#endif /* E769D7A3_B3DD_4F4C_9532_3B4BB2365A6D */
