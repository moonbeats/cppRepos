#include "gtest/gtest.h"
#include "calculator.h"

class CalculatorFixed: public::testing::Test{

protected:
    virtual void TearDown() {
        delete calc;

    }

    virtual void SetUp() {
        calc = new Calculator();

    }
    Calculator* calc;

};

TEST_F(CalculatorFixed,add){
    EXPECT_EQ(calc->add(3,2),5);
    EXPECT_EQ(calc->add(3,3),6);
    EXPECT_EQ(calc->add(-3,2),-1);
    EXPECT_EQ(calc->add(100,-2),98);
}

TEST_F(CalculatorFixed,add1){
    EXPECT_EQ(calc->add(3,2),5);
    EXPECT_EQ(calc->add(3,3),6);
    EXPECT_EQ(calc->add(-3,2),-1);
    EXPECT_EQ(calc->add(100,-2),98);
}