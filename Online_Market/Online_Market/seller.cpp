#include "seller.h"
#include"product.h"
#include"Start_page.h"
void seller::signupseller(seller s)
{
	product p;
	Start_page S;
	cout << "  \n                                           " << "<<<< PLEASE SIGN UP >>>>" << '\n' << '\n' << '\n';
	cout << "Enter your name : " << endl;
	cin >> s.name;
	cout << "Enter your id : " << endl;
	cin >> s.id;
	cout << "Enter your email : " << endl;
	cin >> s.email;
	cout << "----------------------------------------" << '\n'<<'\n';
	cout << "Do you want to add product??" << endl;
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