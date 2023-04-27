#pragma once
#include "Libraries.h"
class Product {
private:
	int type;
	int quant;
	char* name;
	double cost;
	double weight;
	static int count;
public:
	Product(char* Name, char* Type, char* Quant, char* Weight, char* Cost) {
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
		type = atoi(Type);
		quant = atoi(Quant);
		weight = atof(Weight);
		cost = atof(Cost);
	}
public:
	~Product() {
		delete[] name;
	}
public:
	void TabularOutput(Product* product, int i);
public:
	// Type
	void SetType(char* destination) { type = atoi(destination); }
	int GetType() { return type; }
	// Quant
	void SetQuant(char* destination) { quant = atoi(destination); }
	int GetQuant() { return quant; }
	// name
	void SetName(char* destination) { strcpy_s(name, strlen(destination) + 1, destination); }
	char* GetName() { return name; }
	// Cost
	void SetCost(char* destination) { cost = atof(destination); }
	double GetCost() { return cost; }
	// Weight
	void SetWeight(char* destination) { cost = atof(destination); }
	double GetWeight() { return weight; }
	// Count
	void SetCount(int Count) { count = Count; }
	static int GetCount() { return count; }
};