#ifndef C89E4EB4_6794_4DF2_8090_E8E2AF0909AB
#define C89E4EB4_6794_4DF2_8090_E8E2AF0909AB

#include "baseCoin.h"
#include "derivedCoins.h"
#include <vector>
#include <iomanip>
#include "math.h"
class PaymentSystem
{
private:
  std::vector<BaseCoin*> mListofCoinsInserted;
  std::vector<BaseCoin*> *mListofCoinsAvailable = nullptr;
  std::vector<BaseCoin*> mListofCoinsToBePayedOut;
  float mInsertedMoney;
  int mCoin;
  float mDrinkValue;
public:
  PaymentSystem();
  ~PaymentSystem();

  //print menu
  void printMenu();

  //add
  void addCoin(CoinNS::kindOfCoin);

  //setDrinkValue
  void setDrinkValue(float&);

  //accept money
  void pollMoney();

  //money
  float totalMoneyAdded();
  void createPayoutList();
  
  //clear
  void clearInsertedCoinsList();
  
};


#endif /* C89E4EB4_6794_4DF2_8090_E8E2AF0909AB */
