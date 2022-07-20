#include "product.h"
#include"Start_page.h"
vector<product>vtnew;
vector<product>list;
#include<string>
//#include<iostream>
//using namespace std;
void product::default_product(void)
{
	product p1;
	product p2;
	product p3;
	p1.id = 2445;
	p1.name = "kia";
	p1.price = 300000;
	p1.category = "car";
	p1.seller_id = 12345;
	p1.number_of_product = 1;
	p2.id = 1589;
	p2.name = "xiomi";
	p2.price = 4500;
	p2.category = "poco";
	p2.seller_id = 12368;
	p2.number_of_product = 2;
	p3.id = 1234;
	p3.name = "zanussi";
	p3.price = 4500;
	p3.category = "washer";
	p3.seller_id = 35489;
	p3.number_of_product = 3;
	vtnew.push_back(p1);
	vtnew.push_back(p2);
	vtnew.push_back(p3);
}

void product::Add_products(product p)
{
	Start_page S;
	cout << "\n                                       <<<< Add your product here>>>>" << '\n' << '\n';

	cout << "Enter the product id: " << endl;
	cin >> p.id;
	cout << "Enter the name : " << endl;
	cin >> p.name;
	cout << "Enter the price: " << endl;
	cin >> p.price;
	cout << "Enter the category: " << endl;
	cin >> p.category;
	cout << "Enter the seller id: " << endl;
	cin >> p.seller_id;
	cout << "Enter number of product" << '\n';
	cin >> p.number_of_product;
	vtnew.push_back(p);

	cout << "----------------------------------------" << endl;
	cout << "do you want to add a new product?" << endl;
	cout << "yes?" << endl;
	cout << "no?" << endl;
	string ch;
	cin >> ch;
	if (ch == "yes")
	{
		system("CLS");
		p.Add_products(p);
	}
	else
	{
		system("CLS");
		S.startpage();
	}
}

void product::Display_products(void)
{
	auto it = vtnew.begin();
	for (; it != vtnew.end(); it++)
	{
		cout << " id -------->" << it->id;
		cout << "\n name -------->" << it->name;
		cout << "\n price -------->" << it->price;
		cout << "\n category ---------->" << it->category;
		cout << "\n seller id --------->" << it->seller_id;
		cout << "\n Number of product -------->" << it->number_of_product;
		cout << "\n ______________________________________________________________________" << '\n';
	}
}
void product::search(void)
{
	string category, name;
	auto it = vtnew.begin();
	product p;
	int choise;
	cout << endl;
	cout << endl;
	cout << "  1- press 1 to search by name" << endl;
	cout << "  2- press 2 to search by category" << endl;
	cin >> choise;
	if (choise == 1)
	{
		cout << "please enter the name" << endl;
		cin >> name;
		for (; it != vtnew.end(); it++)
		{
			if (name == it->name) {
				cout << " id -------->" << it->id;
				cout << "\n name -------->" << it->name;
				cout << "\n price -------->" << it->price;
				cout << "\n category ---------->" << it->category;
				cout << "\n seller id --------->" << it->seller_id;
				cout << "\n Number of product -------->" << it->number_of_product;
				cout << "\n ______________________________________________________________________" << '\n' << endl;
			}
			else
			{
				cout << "\n Invalid Name please Enter the correct name \n" ;
				break;
			}

		}

	}
	else {
		cout << "enter the category" << endl;
		cin >> category;

		{

			for (; it != vtnew.end(); it++)
			{
				if (category == it->category) {
					cout << " id -------->" << it->id;
					cout << "\n name -------->" << it->name;
					cout << "\n price -------->" << it->price;
					cout << "\n category ---------->" << it->category;
					cout << "\n seller id --------->" << it->seller_id;
					cout << "\n Number of product -------->" << it->number_of_product;
					cout << "\n ______________________________________________________________________" << '\n' << endl;
				}
				else
				{
					cout << "\n Invalid category Enter the correct category please" << '\n';
					break;
				}

			}

		}
	}

}

void product::Display_cart(void)
{
	double total = 0.0;
	int choice;
	auto it = list.begin();
	
	cout << "\t\t############################## YOUR CART ###############################" << '\n' << '\n' << '\n';
	for (; it != list.end(); it++)
	{

		cout << " id -------->" << it->id;
		cout << "\n name -------->" << it->name;
		cout << "\n price -------->" << it->price;
		cout << "\n category ---------->" << it->category;
		cout << "\n seller id --------->" << it->seller_id;
		cout << "\n Number of product -------->" << it->number_of_product;
		cout << "\n ______________________________________________________________________" << '\n';
		total += it->price;
	}
	cout << "To see total price press 1 " << '\n';
	cin >> choice;
	if (choice == 1)
	{
		cout << "Your Total Price = " << total << '\n';
		cout << "Your Product Has Been Confirmed" << '\n';
	}
	
}

void product::Cart()
{
	product Pnew;

	Start_page s;
	string choise;
	
	int number, num_of_product;
	auto it = vtnew.begin();
	cout << "Do you want add any product in your cart ??" << '\n';
	cout << "1:Yes" << '\n' << "2:No" << '\n';
	cin >> number;
	if (number == 1)
	{
		char ch;
		do {
			cout << "Enter number of product" << '\n';
			cin >> num_of_product;
			for (; it != vtnew.end(); it++)
			{
				
				if (num_of_product == it->number_of_product)
				{
					
					Pnew.id = it->id;
					Pnew.name = it->name;
					Pnew.price = it->price;
					Pnew.category = it->category;
					Pnew.seller_id = it->seller_id;
					Pnew.number_of_product = it->number_of_product;

					list.push_back(Pnew);
					
				}
				else {
					break;
				}
			}
		
			cout << "do you want to buy another product: "<<endl;
			cout << "If yes press y if No press n : "<<endl;
			//cout << "2)No";
			cin >> ch;
			
			
		} while (ch == 'y' || ch == 'Y');
	}
	else
	{
		s.startpage();
	}



}
