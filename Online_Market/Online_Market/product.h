#pragma once
#include<string>
#include <iostream>
using namespace std;
class product
{
public:
	int id, seller_id, number_of_product;
	string name, category;
	float price;
	void Add_products(product p);
	void Display_products(void);
	void Display_cart(void);
	void default_product(void);
	void search(void);
	void Cart();
};
