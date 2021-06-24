//
// Created by Administrator on 2021/4/15.
//
#include "gtest/gtest.h"
#include "calculator.h"
class CalculatorFixture:public::testing::Test{
protected:
    virtual void TearDown() {
        delete calculator;

    }

    virtual void SetUp() {
        calculator = new Calculator();

    }

    Calculator * calculator;

};

TEST_F(CalculatorFixture,Plus){
    EXPECT_EQ(calculator->plus(1,1),2);
    EXPECT_EQ(calculator->plus(-1,1),2);
    EXPECT_EQ(calculator->plus(0,1),2);
}
TEST_F(CalculatorFixture,Minus){
    EXPECT_EQ(calculator->minus(1,1),0);
    EXPECT_EQ(calculator->minus(-1,1),-2);
    EXPECT_EQ(calculator->minus(0,1),-1);
}
TEST_F(CalculatorFixture,Times){
    EXPECT_EQ(calculator->minus(1,1),1);
    EXPECT_EQ(calculator->minus(-1,1),-1);
    EXPECT_EQ(calculator->minus(0,1),0);
}
TEST_F(CalculatorFixture,Divid){
    EXPECT_EQ(calculator->minus(1,1),1);
    EXPECT_EQ(calculator->minus(-1,1),-1);
    EXPECT_EQ(calculator->minus(0,1),0);
}
