#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
//update from user-1



int main()
{
  string name;
  string price;
  string quantity;

  ItemToPurchace item1;
  ItemToPurchace item2;
  
  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  cin >> name;
  item1.SetName(name);

  cout << "Enter the item price:" << endl;
  cin >> price;
  item1.SetPrice(price);
  
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item1.SetQuantity(quantity);

  cin.ignore();

  cout <<"Item 2" << endl;

  cout << "Enter the item name:" << endl;
  cin >> name;
  item2.SetName(name);

  cout << "Enter the item price:" << endl;
  cin >> price;
  item1.SetPrice(price);
  
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item1.SetQuantity(quantity);
  
  cout << "TOTAL OUTPUT" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ " << item1.GetPrice() << " = " << item1.GetQuantity()*item1.GetPrice() << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ " << item2.GetPrice() << " = " << item2.GetQuantity()*item2.GetPrice() << endl;
  
  return 0;
}
