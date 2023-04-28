#include "Product.h"
void Product::TabularOutput(Product* product, int i) {
	std::cout << "=======================\n";
	std::cout << "        Product        \n";
	std::cout << "=======================\n";
	std::cout << "Name:      |" << product[i].name;
	std::cout << "Type:      |" << product[i].type << std::endl;
	std::cout << "Quant:     |" << product[i].quant << std::endl;
	std::cout << "Weight:    |" << product[i].weight << std::endl;
	std::cout << "Cost:      |" << product[i].cost << std::endl;
	std::cout << "=======================\n";
}
