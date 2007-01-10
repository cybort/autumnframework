
#ifndef AUTUMN_TYPEINJECTIONTEST_H
#define AUTUMN_TYPEINJECTIONTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "IBeanFactory.h"

using namespace CppUnit;

class TypeInjectionTest: public TestFixture{
	CPPUNIT_TEST_SUITE(TypeInjectionTest);
	CPPUNIT_TEST(testBasicType);
	CPPUNIT_TEST(testCombinedType);
	CPPUNIT_TEST(testBeanType);
	CPPUNIT_TEST(testSingleton);
	CPPUNIT_TEST(testInitDestroyable);
	CPPUNIT_TEST(testCustomizedType);
	CPPUNIT_TEST_SUITE_END();

private:
	IBeanFactory* bf;

public:
	void setUp();
	void tearDown();

	void testBasicType();
	void testCombinedType();
	void testBeanType();
	void testSingleton();
	void testInitDestroyable();
	void testCustomizedType();
};

#endif