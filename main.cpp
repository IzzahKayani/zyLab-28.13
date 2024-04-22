#include <iostream>
using namespace std;
//update from user-1



int main()
{
  string name;
  string price;
  string quantity;
  
  cout << "Item 1" << endl;
  cout << "Enter the item name:" << endl;
  cin >> name;

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
  
  return 0;
}
