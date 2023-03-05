/** **********************************************************************
* @file
************************************************************************/
#pragma once 
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

bool isDiscover(string cc);
bool isAmericanExpress(string cc);
bool isMastercard(string cc);
bool isVisa(string cc);
string getCCType(string cc);
bool luhnsAlgorithm(string cc);
bool isValidCC(string cc);
