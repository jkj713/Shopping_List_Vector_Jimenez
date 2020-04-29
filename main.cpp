//Jennifer Jimenez
//Quiz 5
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class shoppingList
{
  private:
  string item;

  public:
  void setItem(string i) { item = i; }
  string getItem() const { return item; }
};

int main() 
{
  vector<shoppingList> list;
  vector<string> item = {"Kitchen Mixer", "Chairs", "Vanity", "***Clock", "End"};

 for (int i = 0; i < item.size(); i++) 
        cout << item[i] << " "; 
    cout << endl;

  for (int i = 4; i < item.size(); i--)
        cout  << item[i] << " ";
        cout << endl;
return 0;
}