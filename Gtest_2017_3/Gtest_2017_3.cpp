// GTest_2.cpp : 定义控制台应用程序的入口点。
//




//#include "gtest\gtest.h"
#include "E:\download\gtestFile\include\gtest\gtest.h"






#define HELL 100;

int Add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}


TEST(AddFunc, addFuncTest)
{
	int sum = Add(1, 2);
	int sum_2 = Add(2, 3);
	int sum_3 = Add(2, 7);

	int sum_4 = subtract(2, 7);
	EXPECT_EQ(3, sum);
	EXPECT_EQ(3, sum_2);
	EXPECT_EQ(9, sum_3);
	EXPECT_EQ(-5, sum_4);
}

TEST(subtract, subtractFunctest)
{
	int sum_4 = subtract(2, 7);

	EXPECT_EQ(-5, sum_4);
	int sum_5 = subtract(2, 7);
	EXPECT_EQ(5, sum_5);
}


int main(int argc, char* argv[])
{
	testing::GTEST_FLAG(output) = "xml:"; //若要生成xml结果文件
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
