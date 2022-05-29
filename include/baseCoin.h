#ifndef A64DF130_DD57_4B36_9D5D_10896F121838
#define A64DF130_DD57_4B36_9D5D_10896F121838
#include <iostream>
#include "namespaces.h"

class BaseCoin
{
protected:
  float mCoinValue;
public:
  BaseCoin(float val);
  float getValue();
  virtual ~BaseCoin();
  bool operator< (const BaseCoin& cn) const{
    return (this->mCoinValue < cn.mCoinValue);    //helps sort the coins if necesary to be used by std::sort
  }
};



#endif /* A64DF130_DD57_4B36_9D5D_10896F121838 */
