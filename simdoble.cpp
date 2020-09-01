#include <iostream>
#include <immintrin.h>

using namespace std;

int main()
{
    __m256d pair = _mm256_set_pd(91, 12, 123, 1);
    __m256d odd = _mm256_set_pd(11, 83, 55, 73);

    __m256d result = _mm256_add_pd(pair, odd);
    int *f = (int *)&result;
    cout << "Result for sum is:";
    for (int i = 5; i >= 0; i--)
    {
        cout << f[i] << " ";
    }
    cout << "\n";
    __m256d result1 = _mm256_sub_pd(pair, odd);
    int *g = (int *)&result1;
    cout << "Result of the subtraction is: ";
    for (int i = 5; i >= 0; i--)
    {
        cout << g[i] << " ";
    }
    cout << "\n";
    __m256d result2 = _mm256_mul_pd(pair, odd);
    int *h = (int *)&result2;
    cout << "Result of multiplication is:";
    for (int i = 5; i >= 0; i--)
    {
        cout << h[i] << " ";
    }
    cout << "\n";
    __m256d result3 = _mm256_div_pd(pair, odd);
    int *k = (int *)&result3;
    cout << "Result of division is:";
    for (int i = 5; i >= 0; i--)
    {
        cout << k[i] << " ";
    }

    cout << endl;
}