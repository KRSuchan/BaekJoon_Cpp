#include <iostream>
using namespace std;

int main()
{
  int N, kjm, ihs;
  int round = 0;
  cin >> N >> kjm >> ihs;

  while (kjm != ihs)
  {
    kjm = (kjm + 1) / 2;
    ihs = (ihs + 1) / 2;
    round++;
  }
  cout << round << endl;
  return 0;
}