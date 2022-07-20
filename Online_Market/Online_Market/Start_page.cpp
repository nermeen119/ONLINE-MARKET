#include "Start_page.h"
#include"seller.h"
using namespace std;
void Start_page::startpage(void)
{
	
	customer cc;
	seller ss;
	Start_page start;
	string choise;
	string choise2;
	cout << "\n                                       " << "**** WELECOME TO ONLINE MARKET PLACE ****\n" ;
	cout << "Are you a Seller or Customer ?" <<'\n'<<'\n';
	cout << "-1- seller" <<'\n';
	cout << "-2- customer" <<'\n'<<"  ";
	cin >> choise;
	if (choise == "customer" || choise == "2")
	{
			system("CLS");
			cc.signupcustumer(cc);
	}
	else if (choise == "seller" || choise == "1")
	{
		system("CLS");
		cout << "  You want sell ??" << '\n'<<'\n';
		cout << "   yes?" << '\n';
		cout << "   no?" << '\n'<<"   ";
		cin >> choise2;
		if (choise2 == "yes")

		{
			system("CLS");
			ss.signupseller(ss);
		}
		else
		{
			system("CLS");
			start.startpage();
		}
		
	}
}



