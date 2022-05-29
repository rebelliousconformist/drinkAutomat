#include <iostream>
#include "include/automat.h"
using namespace std;

int main(int, char**) {

    Automat machine;
    machine.start();

    machine.mDS->pollDrink();
    machine.mDS->printDrinkIngredients();
    float drinkValue = machine.mDS->getDrinkValue();
    machine.mPS->setDrinkValue(drinkValue);
    machine.mPS->pollMoney();
    machine.mPS->totalMoneyAdded();
    machine.mPS->createPayoutList();
    
    return 0;

}