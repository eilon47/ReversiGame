//
// Created by elon on 27/11/17.
//

#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}

TEST(sd,sds) {
  int x =1;
EXPECT_EQ(1,x);
}