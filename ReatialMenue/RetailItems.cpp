#include <string>
#include "Retail.h"
using namespace std;

RetailItem::RetailItem() // defaul data
{
	description = "dummy description";
	unitsOnHand = 0;
	price = 0.0;
}

/*SETTING DATA*/
void RetailItem::setDescription(string d)
{
	description = d;
}
void RetailItem::setUnits(int u)
{
	unitsOnHand = u;
}
void RetailItem::setPrice(double p)
{
	price = p;
}
/*GETTING DATA*/
string RetailItem::getDescription()
{
	return this->description;
}
int RetailItem::getUnits()
{
	return this->unitsOnHand;
}
double RetailItem::getPrice()
{
	return this->price;
}


