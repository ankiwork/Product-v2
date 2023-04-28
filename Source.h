#pragma once
#include "Libraries.h"
// Working with strings
void InputString(char* destination);
bool InputName(char* destination, char* Name, bool flag);
bool InputType(char* destination, char* Type, bool flag);
bool InputQuant(char* destination, char* Quant, bool flag);
bool InputWeight(char* destination, char* Weight, bool flag);
bool InputCost(char* destination, char* Cost, bool flag);
// Checking strings
bool CheckingAStringForNumbers(char* destination, bool flag);
bool CheckingTheNumberForTheRangeOfTheMenu(char* destination, bool flag);
bool CheckingTheNumberForTheRangeOfTheType(char* destination, bool flag);
bool CheckingTheNumberForTheRangeOfTheQuant(char* destination, bool flag);
bool CheckingTheNumberForTheRangeOfTheWeight(char* destination, bool flag);
bool CheckingTheNumberForTheRangeOfTheCost(char* destination, bool flag);
bool CheckingForTheLatinAlphabet(char* destination, bool flag);
bool CheckingAStringForNumbersAndOneComma(char* destination, bool flag);
bool CheckingOutputInformationAboutOneProductDiopter(char* destination, int count, bool flag);
// Output of information for the user
void InteractiveMenuOutput();
void InputError();
