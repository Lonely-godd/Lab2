#include "pch.h"
using namespace std;

class Object {
private:
    int value;
public:
    Object() {
        value = 5;
        cout << "Object Created" << endl;
    }
    ~Object() {
        cout << "Object Destroyed" << endl;
    }
    int get() {
        return value;
    }
};

TEST(CreateObjectTest, StackObjectTest) {
    Object stackObject;
    ASSERT_EQ(stackObject.get(), 5);
}
TEST(CreateObjectTest, HeapObjectTest) {
    Object* heapObject = new Object();
    ASSERT_EQ(heapObject->get(), 5);
    delete heapObject;
}