#ifndef C1CC7B29_27D7_406C_9336_871C45FC09B1
#define C1CC7B29_27D7_406C_9336_871C45FC09B1

#include <string>
#include "namespaces.h"

class BaseDrink
{
private:
  std::string mName;
  float mCost;

protected:
  void setName(const char*name);
 
public:
  BaseDrink(float value);
  virtual std::string Ingredients();
  float getValue();
  virtual std::string getName();
  virtual ~BaseDrink();
};


#endif /* C1CC7B29_27D7_406C_9336_871C45FC09B1 */
