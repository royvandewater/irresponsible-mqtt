#ifndef MQTT_test_h
#define MQTT_test_h

#include <cppunit/extensions/HelperMacros.h>
#include "../MQTT.h"

class MQTT_test : public CPPUNIT_NS::TestFixture {
  CPPUNIT_TEST_SUITE( MQTT_test );
  CPPUNIT_TEST( test_constructor );
  CPPUNIT_TEST_SUITE_END();

public:
  // Char *character;
  // Char *next_character;

  // void setUp() {
  //   character = new Char('h');
  //   next_character = new Char('n');
  //   character->set_next(next_character);
  // }

  // void tearDown() {
  //   delete mqtt;
  //   delete next_character;
  // }

  void test_constructor() {
    MQTT *mqtt = new MQTT();
    CPPUNIT_ASSERT( mqtt );
  }

  // void test_char_is_last_when_not_last() {
  //   CPPUNIT_ASSERT( !character->is_last() );
  // }

  // void test_char_is_last_when_last() {
  //   CPPUNIT_ASSERT( next_character->is_last() );
  // }

  // void test_get_next_when_not_last() {
  //   CPPUNIT_ASSERT(character->get_next()->get_character() == 'n');
  // }
};

CPPUNIT_TEST_SUITE_REGISTRATION( MQTT_test );

// MQTT_test_h
#endif
