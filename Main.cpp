#include "Libraries.h"
#include "Product.h"
#include "Source.h"
int Product::count = 0;
int main() {
	Product* productArr = new Product[100]; bool flag = true;
	while (flag) {
		int buffer = 4096; bool attempt = true; char* destination = new char[buffer];
		while (flag) {
			system("cls"); InteractiveMenuOutput();
			if (attempt) { std::cout << "Enter the operation number: "; } else { InputError(); } InputString(destination);
			flag = CheckingAStringForNumbers(destination, flag);
			if (!flag) { flag = CheckingTheNumberForTheRangeOfTheMenu(destination, flag); }
			attempt = false;
		} flag = true; attempt = true;
		switch (atoi(destination)) {
		case 1: { flag = false; break; }
		case 2: {
			char* Name = new char[buffer];
			while (flag) {
				system("cls"); std::cout << "The product name must consist of Latin lowercase letters\n";
				if (attempt) { std::cout << "Product name: "; } else { InputError(); } InputString(destination);
				flag = InputName(destination, Name, flag);
				attempt = false;
			} flag = true; attempt = true;
			char* Type = new char[buffer];
			while (flag) {
				system("cls"); std::cout << "The type of product is entered by a number (1 - cookie, 2 - pizza, 3 - bun)\n";
				if (attempt) { std::cout << "Product type: "; } else { InputError(); } InputString(destination);
				flag = InputType(destination, Type, flag);
				attempt = false;
			} flag = true; attempt = true;
			char* Quant = new char[buffer];
			while (flag) {
				system("cls"); std::cout << "The number of products should not exceed 10000 items\n";
				if (attempt) { std::cout << "Product quant: "; } else { InputError(); } InputString(destination);
				flag = InputQuant(destination, Quant, flag);
				attempt = false;
			} flag = true; attempt = true;
			char* Weight = new char[buffer];
			while (flag) {
				system("cls");  std::cout << "The weight of the product should not exceed 50 kg\n";
				if (attempt) { std::cout << "Product weight: "; } else { InputError(); } InputString(destination);
				flag = InputWeight(destination, Weight, flag);
				attempt = false;
			} flag = true; attempt = true;
			char* Cost = new char[buffer];
			while (flag) {
				system("cls"); std::cout << "The price of the product should not exceed 100 conventional units\n";
				if (attempt) { std::cout << "Product cost: "; } else { InputError(); } InputString(destination);
				flag = InputCost(destination, Cost, flag);
				attempt = false;
			} flag = true; attempt = true;
			Product product{ Name, Type, Quant, Weight, Cost }; productArr[productArr->GetCount() - 1] = product;
			delete[] Name; delete[] Type; delete[] Quant; delete[] Weight; delete[] Cost;
			break;
		}
		case 3: {
			if (productArr->GetCount()) {
				while (flag) {
					system("cls"); std::cout << "Enter the product number, total available: " << productArr->GetCount() << std::endl;
					if (attempt) { std::cout << "Enter the number: "; } else { InputError(); } InputString(destination);
					flag = CheckingAStringForNumbers(destination, flag);
					if (!flag) { flag = CheckingOutputInformationAboutOneProductDiopter(destination, productArr->GetCount(), flag); }
					attempt = false;
				} flag = true; attempt = true;
				system("cls"); productArr->TabularOutput(productArr, atoi(destination) - 1); system("pause");
			} else { system("cls"); std::cout << "Positions not added, try again later\n"; system("pause"); }
			break; 
		}
		case 4: { break; }
		case 5: { break; }
		case 6: { break; }
		case 7: { break; }
		}
		delete[] destination;
	}
}
