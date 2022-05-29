#include "../include/automat.h"

Automat::Automat()
{

  
  
}

void Automat::start(){
  mDS = new DrinkSelector();
  mPS = new PaymentSystem();
}

Automat::~Automat()
{
  if (mDS)
  {
    delete mDS;
  }

  if (mPS)
  {
    delete mPS;
  }
  
  
}
