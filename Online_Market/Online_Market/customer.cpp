#include "customer.h"
#include"Start_page.h"
#include"Cart.h"
#include<vector>
#include <string>
//#include"product.h"


void customer::signupcustumer(customer c)
{
	product D;
	Cart cc;
	int ch,choice,choose;
	Start_page s;
	string choise;
	cout << "  \n                                           " << "<<<< PLEASE SIGN UP >>>>" << '\n' << '\n' << '\n';
	cout << "Enter your name : " << endl;
	cin >> c.name;
	cout << "Enter your id : " << endl;
	cin >> c.id;
	cout << "Enter your email : " << endl;
	cin >> c.email;
	cout << "Enter your Address : " << endl;
	cin >> c.Address;
	cout << "Enter your phone number : " << endl;
	cin >> c.phone_number;
	//cust.push_back(c);
	cout << "         ----------------------------------------     " << '\n';
	cout << "Do you want to see products or to search  ?" << '\n';
	cout << "1 ) see products" << endl;
	cout << "2 ) search by category or name" << endl;

	cin >> ch;
	if (ch == 1)
	{
		//system("CLS");
		//D.default_product();
		D.Display_products();
		cout << "Do you want to buy product" << '\n';
		cout << "Enter your choice" << '\n';
		cin >> choice;
		if (choice == 1)
		{
			D.Cart();
			system("CLS");
			D.Display_cart();
			
		}
		else
		{
			s.startpage();
		}

		

		
	}
	else if (ch == 2)
	{

		system("CLS");
		D.search();
		
	}
	

}














