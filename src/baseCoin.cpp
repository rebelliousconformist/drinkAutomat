#include "../include/baseCoin.h"

BaseCoin::BaseCoin(float val) {
    this->mCoinValue = val;
}

float BaseCoin::getValue(){
  return this->mCoinValue;
}

BaseCoin::~BaseCoin() {
    
}
