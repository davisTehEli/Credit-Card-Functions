/** **********************************************************************
* @file
************************************************************************/
#include "thpe1.h"

/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks whether the cc number given is a discover card or not
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A boolean result.  true if the cc num matches a Discover
 *            card or false otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "6011267891123456"
    result = isDiscover(cc); // result would be true

    cc = "1011267891123456";
    result = isDisvoer( cc ); // result would be false

    cc = "6019267891123456";
    result = isDiscover( cc ); // result would be true;

    @endverbatim
 ************************************************************************/
bool isDiscover(string cc)
{
    if(cc.length() != 16)
    {
        return false;
    }

    if(cc[0] != '6' || cc[1] != '0' && cc[1] != '2' && cc[1] != '4' && cc[1] != '5')
    {
        return false;
    }
    else if(cc[2] != '1' && cc[2] != '2' && cc[2] != '4' && cc[2] != '9')
    {
        return false;
    }
    else if(cc[3] != '1' && cc[3] != '9')
    {
        return false;
    }
    else if(cc[4] != '2')
    {
        return false;
    }
    else if(cc[5] != '6')
    {
        return false;
    }
    else
    {
        return true;
    }
}

/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks whether the cc number given is a American Express card or not
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A boolean result.  true if the cc num matches a American
 *            Express card or false otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "143456789112345"
    result = isAmericanExpress( cc ); // result would be false

    cc = "323456789112345";
    result = isAmericanExpress( cc ); // result would be false

    cc = "373456789112345";
    result = isAmericanExpress( cc ); // result would be true;

    @endverbatim
 ************************************************************************/
bool isAmericanExpress(string cc)
{
    if(cc.length() != 15)
    {
        return false;
    }

    if(cc[0] != '3')
    {
        return false;
    }
    else if(cc[1] != '4' && cc[1] != '7')
    {
        return false;
    }
    else 
    {
        return true;
    }
}

/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks whether the cc number given is a Mastercard card or not
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A boolean result.  true if the cc num matches a Mastercard
 *            card or false otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "1534567890123456"
    result = isMastercard( cc ); // result would be false

    cc = "2134567890123456";
    result = isMastercard( cc ); // result would be false

    cc = "2334567890123456";
    result = isMastercard( cc ); // result would be true;

    @endverbatim
 ************************************************************************/
bool isMastercard(string cc)
{
    if(cc.length() != 16)
    {
        return false;
    }

    if(cc[0] != '2' && cc[0] != '3' && cc[0] != '4' && cc[0] != '5' && cc[0] != '6' && cc[0] != '7')
    {
        return false;
    }
    else if (cc[1] != '2' && cc[1] != '3' && cc[1] != '4' && cc[1] != '5' && cc[1] != '6' && cc[1] != '7')
    {
        return false;
    }
    else
    {
        return true;
    }
}

/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks whether the cc number given is a Visa card or not
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A boolean result.  true if the cc num matches a Visa
 *            card or false otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "4234567890123"
    result = isVisa( cc ); // result would be true

    cc = "4234567890123456";
    result = isVisa( cc ); // result would be true

    cc = "4234567890122226";
    result = isVisa( cc ); // result would be true;

    @endverbatim
 ************************************************************************/
bool isVisa(string cc)
{
    if(cc.length() != 13 && cc.length() != 16)
    {
        return false;
    }

    if(cc[0] != '4')
    {
        return false;
    }
    else
    {
        return true;
    }
}

/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks the cc number for what type of card it is.
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A string result. Discover if the result is a discover cc,
 *          Visa if the result is a visa cc, Mastercard if the
 *          result is a Mastercard cc, and American Express if 
 *          result is a American Express cc
 *
 *  @par Example
 *  @verbatim
    string result;

    cc = "4234567890123"
    result = getCCType( cc ); // result would be Visa

    cc = "2334567890123456"
    result = getCCType( cc ); // result would be Mastercard

    cc = "373456789112345";
    result = getCCType( cc ); // result would be American Express;

    @endverbatim
 ************************************************************************/
string getCCType(string cc)
{
    if(isDiscover(cc) == true)
    {
        return "Discover";
    }
    else if(isAmericanExpress(cc) == true)
    {
        return "American Express";
    }
    else if(isMastercard(cc) == true)
    {
        return "Mastercard";
    }
    else if(isVisa(cc) == true)
    {
        return "Visa";
    }
    else
    {
        return "Unknown";
    }
}
/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks the cc to see if the card number is valid.
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A bool result. If the cc given can pass luhns Algoithm
 *          ,then the result is true, false if otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "4716150722142577"
    result = LuhnsAlgorithm( cc ); // result would be True

    cc = "4456895832624"
    result = LuhnsAlgorithm( cc ); // result would be True

    cc = "345649595062090";
    result = LuhnsAlgorithm( cc ); // result would be True;

    @endverbatim
 ************************************************************************/
bool luhnsAlgorithm(string cc)
{

    if(cc.length() == 16)
    {
        int oddSum = 0;
        int evenSum = 0;
        int totalSum = 0;
        for(int i = 0; i < cc.length(); i = i + 2 )
        {
            oddSum += cc[i] - '0';
        }
        for(int i = 1; i < cc.length(); i = i + 2)
        {
            int digit = 2 * (cc[i] - '0');
            if(digit > 9)
            {
                digit = digit - 9;               
            }
            evenSum += digit;
        }
        totalSum = oddSum + evenSum;
        if(totalSum % 10 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(cc.length() == 13)
    {
        int oddSum = 0;
        int evenSum = 0;
        int totalSum = 0;
        for(int i = 0; i < cc.length(); i = i + 2 )
        {
            evenSum += cc[i] - '0';
        }
        for(int i = 1; i < cc.length(); i = i + 2)
        {
            int digit = 2 * (cc[i] - '0');
            if(digit > 9)
            {
                digit = digit - 9;
            }
            oddSum += digit;
        }
        totalSum = oddSum + evenSum;
        if(totalSum % 10 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(cc.length() == 15)
    {
        int oddSum = 0;
        int evenSum = 0;
        int totalSum = 0;
        for(int i = 0; i < cc.length(); i = i + 2 )
        {
            evenSum += cc[i] - '0';
        }
        for(int i = 1; i < cc.length(); i = i + 2)
        {
            int digit = 2 * (cc[i] - '0');
            if(digit > 9)
            {
                digit = digit - 9;
            }
            oddSum += digit;
        }
        totalSum = oddSum + evenSum;
        if(totalSum % 10 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
/** **********************************************************************
 *  @author Elijah J. Davis
 *
 *  @par Description
 *  Checks the cc to see if the card number is valid.
 *  
 *
 *  @param[in] cc the credit card number in.
 *
 *  @returns A bool result. If the cc given can pass all isVallidCC
 *          tests ,then the result is true, false if otherwise
 *
 *  @par Example
 *  @verbatim
    bool result;

    cc = "345649595062090"
    result = isValidCC( cc ); // result would be True

    cc = "4425473125791"
    result = isValidCC( cc ); // result would be False

    cc = "345649595062@90"
    result = isValidCC( cc ); // result would be False;

    @endverbatim
 ************************************************************************/
bool isValidCC(string cc)
{
    int i;
    if(cc.length() != 16 && cc.length() != 15 && cc.length() != 13)
    {
        return false;
    }
    for(i = 0; i <cc.length() - 1; i++)
    {
        if(!isdigit(cc[i]))
        {
            return false;
        }
    }
    if(luhnsAlgorithm(cc) != true)
    {
        return false;
    }
    else
    {
        return true;
    }

}