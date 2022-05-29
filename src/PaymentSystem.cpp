#include "../include/PaymentSystem.h"

void PaymentSystem::printMenu(){
  
  std::cout << "Insert Coins to pay for drink \n";
  std::cout << "1:"<< std::setw(4)  << "10 ¢ ! \n";
  std::cout << "2:"<< std::setw(4)  << "50 ¢ ! \n";
  std::cout << "3:"<< std::setw(4)  << "1 € ! \n";
  std::cout << "4:"<< std::setw(4)  << "2 € ! \n";
  std::cout << "5:"<< std::setw(4)  << "5 € ! \n";
}

float PaymentSystem::totalMoneyAdded(){
  if(this->mListofCoinsInserted.empty()){
    this->mInsertedMoney = 0;
  }
  else
  {
    this->mInsertedMoney = 0;
    for (auto i : mListofCoinsInserted)
    {
      this->mInsertedMoney += i->getValue();
    }
  }
  return this->mInsertedMoney;
}

void PaymentSystem::createPayoutList(){

  float tempMoneyHolder = fabs(mInsertedMoney - mDrinkValue);
  tempMoneyHolder = roundf(tempMoneyHolder*100)/100.0;
  
  while (tempMoneyHolder !=0)
  {
    if(tempMoneyHolder >= 2){
      mListofCoinsToBePayedOut.push_back(new TwoEuro());
      tempMoneyHolder -= 2;
    }
    else if (tempMoneyHolder >= 1){
      mListofCoinsToBePayedOut.push_back(new OneEuro());
      tempMoneyHolder -=1;
    }
     else if (tempMoneyHolder >= 0.5){
      mListofCoinsToBePayedOut.push_back(new FiftyCent());
      tempMoneyHolder -= 0.5;
    }
    else if (tempMoneyHolder >= 0.1){
      mListofCoinsToBePayedOut.push_back(new TenCent());
      tempMoneyHolder -=0.1;
    }
    else
    {
      tempMoneyHolder = 0;
    }

  }

 std::cout << "Returning Money in denominations of : " ;
  for (std::vector<BaseCoin*>::iterator it = mListofCoinsToBePayedOut.begin(); it < mListofCoinsToBePayedOut.end(); ++it)
  {
      std::cout << (*it)->getValue() << " ";
  }
  
  std::cout << std::endl;
  
  
}


void PaymentSystem::clearInsertedCoinsList() {
  for (auto &&i : mListofCoinsInserted)
  {
    delete i;
    i = nullptr;
  }
  mListofCoinsAvailable->clear();
    
}


void PaymentSystem::addCoin(CoinNS::kindOfCoin whichCoin) {
    switch (whichCoin)
    {
    case 1:
      mListofCoinsInserted.push_back(new TenCent());
      break;
    case 2:
      mListofCoinsInserted.push_back(new FiftyCent());
      break;
    case 3:
      mListofCoinsInserted.push_back(new OneEuro());
      break;
    case 4:
      mListofCoinsInserted.push_back(new TwoEuro());
      break;
    case 5:
      mListofCoinsInserted.push_back(new FiveEuro());
      break;
    default:
      break;
    }
}

void PaymentSystem::setDrinkValue(float & drinkValue){
  this->mDrinkValue = drinkValue;
}

void PaymentSystem::pollMoney(){
  if(this->mDrinkValue !=0){
  while (true)
    {
        if((this->mDrinkValue - (this->totalMoneyAdded())) > 0)
        {
        this->printMenu();
        std::cin >> mCoin;
        this->addCoin((CoinNS::kindOfCoin)mCoin);
        std::cout << "Money Paid :" << this->totalMoneyAdded() << "€ \n";
        std::cout << "Money to be paid: " << (this->mDrinkValue - (this->totalMoneyAdded())) << "€ \n";
        mCoin  = 0;
        }
        else
        {
            break;
        }
    }
  }
  else{
    std::cout << "drink is free ! \n"; 
  }
}

PaymentSystem::PaymentSystem()
{

  this->mDrinkValue = 0;

  mListofCoinsAvailable = new std::vector<BaseCoin*>();
  mListofCoinsAvailable->push_back(new FiveEuro());
  mListofCoinsAvailable->push_back(new TwoEuro());
  mListofCoinsAvailable->push_back(new TenCent());
  mListofCoinsAvailable->push_back(new OneEuro());
  mListofCoinsAvailable->push_back(new FiftyCent());
}

PaymentSystem::~PaymentSystem()
{
  if(!this->mListofCoinsInserted.empty()){
    for (auto element : mListofCoinsInserted){
      delete element;
    }
    mListofCoinsInserted.clear();
  }

  if (mListofCoinsAvailable)
  {
    if(!this->mListofCoinsAvailable->empty()){
    for (auto element : *mListofCoinsAvailable){
      delete element;
    }
    mListofCoinsAvailable->clear();
  }
  delete mListofCoinsAvailable;
  }
}
