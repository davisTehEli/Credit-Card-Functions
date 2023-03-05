#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "thpe1.h"

TEST_CASE("isDiscover - cc length less than 16")
{
    string cc = "1";

    bool result = isDiscover(cc);
    REQUIRE(result == false);

}

TEST_CASE("isDiscover - cc length equal to 16")
{
    string cc = "6011267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc first digit equal to 6")
{
    string cc = "6011267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc first digit equal to 1")
{
    string cc = "1011267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == false);
}

TEST_CASE("isDiscover - cc second digit equal to 0")
{
    string cc = "6011267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc third digit equal to 1")
{
    string cc = "6011267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc fourth digit equal to 9")
{
    string cc = "6019267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc fifth digit equal to 2")
{
    string cc = "6511267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isDiscover - cc fifth digit equal to 1")
{
    string cc = "6411167891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == false);
}

TEST_CASE("isDiscover - cc sixth digit equal to 6")
{
    string cc = "6211267891123456";

    bool result = isDiscover(cc);
    REQUIRE(result == true);
}

TEST_CASE("isAmericanExpress - cc length shorter than 15")
{
    string cc = "1";

    bool result = isAmericanExpress(cc);
    REQUIRE(result == false);
}

TEST_CASE("isAmericanExpress - cc first digit not 3")
{
    string cc = "143456789112345";

    bool result = isAmericanExpress(cc);
    REQUIRE(result == false);
}

TEST_CASE("isAmericanExpress - cc second digit not 4 or 7")
{
    string cc = "323456789112345";

    bool result = isAmericanExpress(cc);
    REQUIRE(result == false);
}

TEST_CASE("isAmericanExpress - cc first digit equal to 3 and second qual to 7 ")
{
    string cc = "373456789112345";

    bool result = isAmericanExpress(cc);
    REQUIRE(result == true);
}

TEST_CASE("isMastercard - cc length less than 16")
{
    string cc = "1";

    bool result = isMastercard(cc);
    REQUIRE(result == false);
}

TEST_CASE("isMastercard - cc first digit not equal to 50-55 inclusive")
{
    string cc = "1534567890123456";

    bool result = isMastercard(cc);
    REQUIRE(result == false);
}

TEST_CASE("isMastercard - cc second digit not equal to 50-55 inclusive")
{
    string cc = "2134567890123456";

    bool result = isMastercard(cc);
    REQUIRE(result == false);
}

TEST_CASE("isMastercard - first two digits equal to 50-55 inclusive")
{
    string cc = "2334567890123456";

    bool result = isMastercard(cc);
    REQUIRE(result == true);
}

TEST_CASE("isVisa - card length not equal to 13 or 16")
{
    string cc = "1";

    bool result = isVisa(cc);
    REQUIRE(result == false);
}

TEST_CASE("isVisa - first digit equal to for 4 in 13 digit length card")
{
    string cc = "4234567890123";

    bool result = isVisa(cc);
    REQUIRE(result == true);
}

TEST_CASE("isVisa - first digit equal to for 4 in 16 digit length card")
{
    string cc = "4234567890123456";

    bool result = isVisa(cc);
    REQUIRE(result == true);
}

TEST_CASE("getCCType - cc with length of 16")
{
    string cc = "4234567890123456";
    
    string result = getCCType(cc);
    REQUIRE(result == "Mastercard");
}

TEST_CASE("getCCType - cc with length of 13")
{
    string cc = "4234567890123";
    
    string result = getCCType(cc);
    REQUIRE(result == "Visa");
}

TEST_CASE("getCCType - cc with starting with 34")
{
    string cc = "343456789012345";
    
    string result = getCCType(cc);
    REQUIRE(result == "American Express");
}

TEST_CASE("getCCType - cc starting with 65 with length of 16")
{
    string cc = "6534567890123000";
    
    string result = getCCType(cc);
    REQUIRE(result == "Mastercard");
}

TEST_CASE("getCCType - cc with length of 14")
{
    string cc = "42345678901234";
    
    string result = getCCType(cc);
    REQUIRE(result == "Unknown");
}

TEST_CASE("luhnsAlgorithm - Valid 16 digit card number")
{
    string cc = "4716150722142577";

    bool result = luhnsAlgorithm(cc);
    REQUIRE(result == true);
}

TEST_CASE("luhnsAlgorithm - Valid 13 digit card number")
{
    string cc = "4456895832624";

    bool result = luhnsAlgorithm(cc);
    REQUIRE(result == true);
}

TEST_CASE("luhnsAlgorithm - Valid 15 digit card number")
{
    string cc = "345649595062090";

    bool result = luhnsAlgorithm(cc);
    REQUIRE(result == true);
}

TEST_CASE("luhnsAlgorithm - Non Valid 13 digit card number")
{
    string cc = "3456305812624";

    bool result = luhnsAlgorithm(cc);
    REQUIRE(result == false);
}

TEST_CASE("isValidCC - visa card - valid credit card")
{
    string cc = "3456305812624";

    bool result = isValidCC(cc);
    REQUIRE(result == false);
}

TEST_CASE("isValidCC - valid 15 digit credit card")
{
    string cc = "345649595062090";

    bool result = isValidCC(cc);
    REQUIRE(result == true);
}

TEST_CASE("isValidCC - invalid credit card number")
{
    string cc = "4425473125791";

    bool result = isValidCC(cc);
    REQUIRE(result == false);
}

TEST_CASE("isValidCC - invalid credit card number with non digit")
{
    string cc = "345649595062@90";

    bool result = isValidCC(cc);
    REQUIRE(result == false);
}

