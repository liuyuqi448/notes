#include <iostream>
using namespace std;
int main()
{
  char c;
  cout << "enter a sentence:" << endl;
  while ((c = cin.get())!=EOF) 
    cout.put(c);
  cout << "end" << endl;
  return 0;
}