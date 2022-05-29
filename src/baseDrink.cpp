#include "../include/baseDrink.h"

BaseDrink::BaseDrink( float value): mCost(value)
{
}

BaseDrink::~BaseDrink()
{
}

void BaseDrink::setName(const char*name){
  this->mName = std::string(name);
}

float BaseDrink::getValue(){
  return this->mCost;
}
std::string BaseDrink::getName(){
  return this->mName;
}

std::string BaseDrink::Ingredients(){
  return std::string("Water");
}