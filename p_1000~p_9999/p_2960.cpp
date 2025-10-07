#include <iostream>
using namespace std;

// p_2960 : 에라토스테네스의 체

int main()
{
    int N;
    int K;
    cin >> N >> K;
    bool *prime = new bool[N + 1];
    fill(prime, prime + N + 1, true);
    prime[0] = prime[1] = false; // 0 and 1
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i; j <= N; j += i)
            {
                if (prime[j])
                {
                    prime[j] = false;
                    K--;
                    if (K == 0)
                    {
                        cout << j << "\n";
                        break;
                    }
                }
            }
        }
        if (K == 0)
            break;
    }
    return 0;
}