#include <string>
using namespace std; 


class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;

public:
	//constructor
	RetailItem(); // default - displays data
	//functions prototypes
	void setDescription(string);
	void setUnits(int);
	void setPrice(double);
	string getDescription();
	int getUnits();
	double getPrice();




};