#include <gtest/gtest.h>

#include "../include/baseCoin.h"

class CoinTest: public ::testing::Test
{

protected:
  
  float coinvalue = 10.0;
  BaseCoin *n = new BaseCoin(coinvalue);

  CoinTest(){}

  void SetUp() override {
  }

  void TearDown() override {

  }

};

TEST_F(CoinTest,valueCheck){
  EXPECT_DOUBLE_EQ(coinvalue,n->getValue());
}