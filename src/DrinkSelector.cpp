#include "../include/DrinkSelector.h"

DrinkSelector::DrinkSelector()
{
  
}

DrinkSelector::~DrinkSelector()
{
  if(this->mDrink){
    delete this->mDrink;
    this->mDrink = nullptr;
  }
}


void DrinkSelector::setDrink(drinkNS::softDrink whichdrink) {

  if (!this->mDrink)
  {
    switch (whichdrink)
    {
    case 1:
      this->mDrink = static_cast<BaseDrink*> (new Fanta());
      break;
    case 2:
      this->mDrink = static_cast<BaseDrink*> (new Cocacola());
      break;
    case 3:
      this->mDrink = static_cast<BaseDrink*> (new Pepsi());
      break;

    default:
      this->mDrink = static_cast<BaseDrink*> (new Water());
      break;
    }
  }
    
}

std::string DrinkSelector::getSelectedDrinkName(){
  
  if (this->mDrink)
  {
    return this->mDrink->getName();
  }
  else{
    return std::string("empty");
  }

}

float DrinkSelector::getDrinkValue(){
  
  if (this->mDrink)
  {
    return this->mDrink->getValue();
  }
  else{
    return 0.0;
  }
}

void DrinkSelector::clearDrink(){

  if (this->mDrink)
  {
    delete this->mDrink;
    this->mDrink = nullptr;
  }
}

void DrinkSelector::printMenu(){
    std::cout << "Select Drink from automat ! \n";
    std::cout << "1: "<< std::setw(4)  << "Fanta ! \n";
    std::cout << "2: "<< std::setw(4)  << "Cocacola ! \n";
    std::cout << "3: "<< std::setw(4)  << "Pepsi ! \n";
}

void DrinkSelector::pollDrink(){

  //loop till choice not in list
    while (true)
    { 
        this->printMenu();
        std::cin >> mUserDrink;
        if((drinkNS::softDrink(mUserDrink) <= drinkNS::Pepsi) && (drinkNS::softDrink(mUserDrink) >= drinkNS::Fanta)){
            std::cout << "Available ! \n";
            //set Drink
            this->setDrink((drinkNS::softDrink)mUserDrink);
            std::cout << "Drink you selected costs: " << this->getDrinkValue() << "\n";
            break;
        }
        else{
            std::cout << "Not available ! \n";
        }
        
    }

}

void DrinkSelector::printDrinkIngredients(){
  std::cout << this->mDrink->Ingredients() << "\n";
}