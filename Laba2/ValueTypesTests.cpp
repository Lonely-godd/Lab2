#include "pch.h"

class ValueTest {
public:
	int value;
	ValueTest(int value) : value(value) {}

};
void ChangeNumber(ValueTest number) {
	number.value++;
}

TEST(ValueTest, ChangeNumberValue) {
	int five = 5;
	ValueTest number(five);
	ChangeNumber(number);
	ASSERT_EQ(number.value, five);
}