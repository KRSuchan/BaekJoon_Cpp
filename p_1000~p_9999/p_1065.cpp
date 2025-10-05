#include <iostream>
using namespace std;

// p_1065 : 한수

int sequence_count(int n)
{
  if (n < 100)
  {
    return n;
  }

  int count = 99; // 1~99까지는 모두 한수

  for (int i = 100; i <= n; i++)
  {
    int hundreds = i / 100;
    int tens = (i / 10) % 10;
    int ones = i % 10;

    if ((hundreds - tens) == (tens - ones))
    {
      count++;
    }
  }

  return count;
}

int main()
{
  int N;
  cin >> N;

  int cnt = sequence_count(N);

  cout << cnt << endl;

  return 0;
}