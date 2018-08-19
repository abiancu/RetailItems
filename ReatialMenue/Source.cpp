#include <iostream>
#include <string>
#include <cstring>
#include "Retail.h"
using namespace std; 



int main()
{

	//RetailItem item1, item2, item3;
	RetailItem item[3];
	double price =0.0; 
	double total = 0.00;
	int units =0;
	string desc;
	char str;
	cout << "Welcome to the retail store!" << endl;
	
	///****GETTING DATA****/
	for (int i = 0; i < 3; i++)
	{
		cout << "Price must be greater than 0" << endl;
		cout << "Please enter price for item : " << i + 1 << ": ";
		cin >> price;
		/*RetailItem* ri = new RetailItem();
		ri->setPrice(price);*/		
		item[i].setPrice(price);
		cout << endl;
		while (price <= 0)
		{
			cout << "Price must be greater than 0" << endl;
			cout << "Please enter price for item " << i+1 << ": ";
			cin >> price;
			/*ri->setPrice(price);*/
			item[i].setPrice(price);
		}
		cout << endl;
		cout << "Inventory must be greater than 0" << endl;
		cout << "Please enter units on hand for item " << i + 1 << ": ";
		cin >> units;
		item[i].setUnits(units);
		
		while (units <= 0)
		{

			cout << "Inventory must be greater than 0" << endl;
			cout << "Please enter units on hand for item " << i+1 << ": ";
			cin >> units;
			item[i].setUnits(units);
		}
				
		cout << endl;
		cout << "Please enter the description for item " << i+1 << ": ";
		cin.get(str);
		getline(cin, desc); // reading a whole string
		//ri->setDescription(desc);
		item[i].setDescription(desc);
		/*cout << "ITEM REVIEW: Pirce: " << ri->getPrice() << " Unit: " << ri->getUnits() << "\n" << endl;
		item[i] = ri;*/
	}
	
	///*SETTING DATA*/
	cout << "Display all items" << endl;
	for (int i = 0; i < 3; i++)
	{
		
		cout << "Description: " << item[i].getDescription() << endl;
		cout << "Units on hand: " << item[i].getUnits() << endl;
		cout << "Price: $" << item[i].getPrice() << endl << endl;
	}

	cout << "Total Inventory: " ;
	for (int i = 0; i < 3; i++)
	{		
		total += item[i].getPrice();		
	}
	cout << total;

	/*cout << "DEBUG: CHECKING ARRAY VALS" << endl;
	cout << "Description: " << item[0]->getDescription() << endl;
	cout << "Units on hand: " << item[0]->getUnits() << endl;
	cout << "Price: $" << item[0]->getPrice() << endl;

	cout << "Description: " << item[1]->getDescription() << endl;
	cout << "Units on hand: " << item[1]->getUnits() << endl;
	cout << "Price: $" << item[1]->getPrice() << endl;*/





	
	/*while (price <= 0)
	{
		cout << "Price must be greater than 0." << endl;
		cout << "Please enter price for item 1: " << endl;
		cin >> price;
	}
	item1.setPrice(price);


	cout << "Please enter Inventory for item 1: " << endl;
	while (units <= 0)
	{
		cout << "Inventory must be greater than 0." << endl;
		cout << "Please enter Inventory for item 1: " << endl;
		cin >> price;
	}
	item1.setUnits(units);

	cout << "Please enter the description for item 1: ";
	cin >> desc;
	item1.setDescription(desc);


	cout << "Display all items" << endl;
	cout << "Description: " << item1.getDescription(desc) << endl;
	cout << "Units on hand: " << item1.getUnits(units) << endl;
	cout << "Price: $" << item1.getPrice(price) << endl;

	cout << "Description: " << item2.getDescription(desc) << endl;
	cout << "Units on hand: " << item2.getUnits(units) << endl;
	cout << "Price: $" << item2.getPrice(price) << endl;

	cout << "Description: " << item3.getDescription(desc) << endl;
	cout << "Units on hand: " << item3.getUnits(units) << endl;
	cout << "Price: $" << item3.getPrice(price) << endl;
	
	cout << "Display total inventory" << endl;
	cout << "The total inventory is: " << item1.getUnits(units) + item2.getUnits(units) + item3.getUnits(units) << endl;
	*/


	cout << endl;
	system("pause");
	return 0;
}