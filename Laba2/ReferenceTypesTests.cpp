#include "pch.h"

class ReferenceTest {
public:
	int value;
	ReferenceTest(int value) : value(value) {}
};

void ChangeReferenceNumber(ReferenceTest& value) {
	value.value = 15;
}

TEST(ReferenceTestValue, ReferenceTest) {
	ReferenceTest value(3);
	ChangeReferenceNumber(value);
	ASSERT_EQ(value.value, 15);
}