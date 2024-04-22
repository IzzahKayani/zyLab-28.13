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
  
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;

  cin.ignore();

  cout <<"Item 2" << endl;

  cout << "Enter the item name:" << endl;
  cin >> name;

  cout << "Enter the item price:" << endl;
  cin >> price;
  
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;

  cout << "TOTAL OUTPUT" << endl;
  cout << 
  return 0;
}
