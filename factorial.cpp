#include <iostream>
using namespace std;
int mut(int);
int main()
{
  int n  = 6;
  cout << mut(n);
  cout << endl;
  return 0;
}

int mut(int mult)
{
  if(mult == 1)
  {
    return 1;
  }
  return mult * mut(mult - 1);
}
