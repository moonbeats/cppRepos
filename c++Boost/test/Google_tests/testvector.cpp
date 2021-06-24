#include"bits/stdc++.h"

#include "gtest/gtest.h"
using namespace std;
class TestSTLVector: public::testing::Test{
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

    }


};


TEST(TestSTLVector, PushBack) {
    vector<int> v;
    v.push_back(1);
    EXPECT_EQ(v[0],1);
}
