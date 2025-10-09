#include <iostream>
using namespace std;

// p_14842 : 재홍의 사다리

int main()
{
    double W, H;
    long N;
    if (!(cin >> W >> H >> N))
        return 0;
    double S = 0.0L;
    if (N % 2 == 0)
    {
        S = (double)(N / 2) - 1.0L;
    }
    else
    {
        double Nd = (double)N;
        S = ((Nd - 1.0L) * (Nd - 1.0L)) / (2.0L * Nd);
    }
    double ans = H * S;
    cout.setf(std::ios::fixed);
    cout << (double)ans << '\n';
    return 0;
}