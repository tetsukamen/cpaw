#include <iostream>
using namespace std;

int main()
{
    long long a_p = 1584891, a_r = 32134, b_p = 3438478, b_r = 193127, a = 1;
    long long tmp;
    while (1)
    {
        tmp = a_p * a + a_r;
        cout << "tmp:" << tmp << endl;
        if (tmp % b_p == b_r)
        {
            cout << "ans:" << tmp << endl;
            break;
        }
        else
        {
            a++;
        }
    }
}