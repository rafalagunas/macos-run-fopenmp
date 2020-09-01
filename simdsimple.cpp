#include <iostream>
#include <immintrin.h>

using namespace std;

int main()
{

    __m256 pair = _mm256_set_ps(213, 2131, 212, 534, 634, 74, 12, 41);
    __m256 odd = _mm256_set_ps(12, 3, 5, 823, 623, 9967, 74, 465);

    __m256 res = _mm256_add_ps(pair, odd);
    float *f = (float *)&res;
    cout << "Result for sum is: ";
    for (int i = 7; i >= 0; i--)
    {
        cout << f[i] << " ";
    }

    cout << "\n";

    __m256 res1 = _mm256_sub_ps(pair, odd);
    float *g = (float *)&res1;
    cout << "Result of substraction is: ";

    for (int i = 7; i >= 0; i--)
    {
        cout << g[i] << " ";
    }

    cout << "\n";

    __m256 res2 = _mm256_mul_ps(pair, odd);
    float *h = (float *)&res2;
    cout << "Result for multiplication is: ";

    for (int i = 7; i >= 0; i--)
    {
        cout << h[i] << " ";
    }

    cout << "\n";

    __m256 res3 = _mm256_div_ps(pair, odd);
    float *k = (float *)&res3;
    cout << "Result of division is: ";

    for (int i = 7; i >= 0; i--)
    {
        cout << k[i] << " ";
    }

    cout << endl;
}
