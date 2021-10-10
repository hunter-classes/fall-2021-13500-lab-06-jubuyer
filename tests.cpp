#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caeser.h"

// add your tests here
TEST_CASE("Caeser Cipher Theory Tests") {
  SUBCASE("Basic") {
    CHECK((encryptCaesar("Way to Go!",5)) == "Bfd yt Lt!");
    CHECK((encryptCaesar("I l!Ke to cOde and s@y lies", 8)) == "Q t!Sm bw kWlm ivl a@g tqma");
    CHECK((encryptCaesar("I don't Know lol", 21)) == "D yji'o Fijr gjg");
  }
}
