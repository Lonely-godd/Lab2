#include "pch.h"
using namespace std;

TEST(MemoryTest, HeavyMemoryCONS) {
    try {
        while (true) {
            int* smth = new int[100000000];
        }
    }
    catch (bad_alloc&) {
        ASSERT_TRUE(true);
        return;
    }
    FAIL(L"FAIL");
}