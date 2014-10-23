#ifndef MQTT_test_h
#define MQTT_test_h

#include <cppunit/extensions/HelperMacros.h>
#include "../MQTT.h"

class MQTT_test : public CPPUNIT_NS::TestFixture {
  CPPUNIT_TEST_SUITE( MQTT_test );
  CPPUNIT_TEST( test_constructor );
  CPPUNIT_TEST_SUITE_END();

public:
  void test_constructor() {
  MQTT *mqtt = new MQTT();
    CPPUNIT_ASSERT( mqtt );
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( MQTT_test );

#endif
