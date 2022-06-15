#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

int main()
{
    string encoded = "fsdz{Fdhvdu_flskhu_lv_fodvvlfdo_flskhu}";
    for (int i = 0; i < encoded.size(); i++)
    {
        if (encoded[i] == '{' || encoded[i] == '}' || encoded[i] == '_')
        {
            cout << encoded[i];
        }
        else
        {
            cout << char(encoded[i] - 3);
        }
    }
    cout << endl;
}