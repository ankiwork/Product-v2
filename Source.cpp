#include "Source.h"
void InputString(char* destination) {
	const int buffersize = 4096;
	fseek(stdin, 0, SEEK_END);
	char buffer[buffersize] = { };
	fgets(buffer, buffersize, stdin);
	strcpy_s(destination, strlen(buffer) + 1, buffer);
}
bool InputName(char* destination, char* Name, bool flag) {
	flag = CheckingForTheLatinAlphabet(destination, flag);
	if (!flag) { strcpy_s(Name, strlen(destination) + 1, destination); flag = false; }
	return flag;
}
bool InputType(char* destination, char* Type, bool flag) {
	flag = CheckingAStringForNumbers(destination, flag);
	if (!flag) { flag = CheckingTheNumberForTheRangeOfTheType(destination, flag); }
	if (!flag) { strcpy_s(Type, strlen(destination) + 1, destination); flag = false; }
	return flag;
}
bool InputQuant(char* destination, char* Quant, bool flag) {
	flag = CheckingAStringForNumbers(destination, flag);
	if (!flag) { flag = CheckingTheNumberForTheRangeOfTheQuant(destination, flag); }
	if (!flag) { strcpy_s(Quant, strlen(destination) + 1, destination); flag = false; }
	return flag;
}
bool InputWeight(char* destination, char* Weight, bool flag) {
	flag = CheckingAStringForNumbersAndOneComma(destination, flag);
	if (!flag) { flag = CheckingTheNumberForTheRangeOfTheWeight(destination, flag); }
	if (!flag) { strcpy_s(Weight, strlen(destination) + 1, destination); flag = false; }
	return flag;
}
bool InputCost(char* destination, char* Cost, bool flag) {
	flag = CheckingAStringForNumbersAndOneComma(destination, flag);
	if (!flag) { flag = CheckingTheNumberForTheRangeOfTheCost(destination, flag); }
	if (!flag) { strcpy_s(Cost, strlen(destination) + 1, destination); flag = false; }
	return flag;
}
bool CheckingAStringForNumbers(char* destination, bool flag) {
	for (int i = 0; i < strlen(destination) - 1; i++) {
		if (destination[i] < 48 || destination[i] > 57) { flag = true; break; } 
		else { flag = false; }
	}
	return flag;
}
bool CheckingTheNumberForTheRangeOfTheMenu(char* destination, bool flag) { 
	if (atoi(destination) > 0 && atoi(destination) < 8) { flag = false; }
	else { flag = true; }
	return flag;
}
bool CheckingTheNumberForTheRangeOfTheType(char* destination, bool flag) {
	if (atoi(destination) > 0 && atoi(destination) < 4) { flag = false; }
	else { flag = true; }
	return flag;
}
bool CheckingTheNumberForTheRangeOfTheQuant(char* destination, bool flag) {
	if (atoi(destination) > 0 && atoi(destination) < 10001) { flag = false; }
	else { flag = true; }
	return flag;
}
bool CheckingTheNumberForTheRangeOfTheWeight(char* destination, bool flag) {
	if (atof(destination) > 0 && atof(destination) < 50) { flag = false; }
	else { flag = true; }
	return flag;
}
bool CheckingTheNumberForTheRangeOfTheCost(char* destination, bool flag) {
	if (atof(destination) > 0 && atof(destination) < 101) { flag = false; }
	else { flag = true; }
	return flag;
}
bool CheckingForTheLatinAlphabet(char* destination, bool flag) {
	for (int i = 0; i < strlen(destination) - 1; i++) {
		if (destination[i] < 97 || destination[i] > 122) { flag = true; break; }
		else { flag = false; }
	}
	return flag;
}
bool CheckingAStringForNumbersAndOneComma(char* destination, bool flag) {
	int count = 0;
	for (int i = 0; i < strlen(destination) - 1; i++) {
		if (destination[0] == 44 || destination[strlen(destination) - 2] == 44) { flag = true; break; }
		if (destination[i] < 97 || destination[i] > 122) {
			if (destination[i] == 44) {
				count++; if (count > 1) { flag = true; break;}
			}
			flag = false;
		}
		else { flag = true; break; }
	}
	return flag;
}
bool CheckingOutputInformationAboutOneProductDiopter(char* destination, int count, bool flag) {
	if (atoi(destination) > 0 && atoi(destination) <= count) { flag = false; }
	else { flag = true; }
	return flag;
}
void InteractiveMenuOutput() {
	std::cout << "1 - End the program\n";
	std::cout << "2 - Add information about new products\n";
	std::cout << "3 - Output information about one product\n";
	std::cout << "4 - Output information about all products\n";
	std::cout << "5 - \n";
	std::cout << "6 - \n";
	std::cout << "7 - \n";
}
void InputError() {
	std::cout << "Input error, try again: ";
}
