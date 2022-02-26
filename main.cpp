#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // The N objects.
    vector<int> objects;
    const int N = 7;

    for(int i = 1; i <= N; ++i)
    {
        objects.push_back(i);
    }

    cout << "N is " << N << endl;

    // 2^0 + 2^1 + 2^2 + 2^3 + ...  + 2^N-1
    // This is the decimal value of a binary number with
    // all 1s in the bits for each object.
    // The trick here is to bit shift a 1 N + 1 times
    // and then subtract 1 to get N 1s.
    int numCombos = (1 << N) - 1;

    cout << "numCombos is " << numCombos << endl;

    // for each combination
    for(int count = 1; count <= numCombos; ++count)
    {
        cout << endl << endl << "(" << count << ")" << endl;

        // for each bit
        for(int bit = 0; bit < N; ++bit)
        {
            // if the bit is 1
            if(count & (1 << bit))
            {
                // do something for a 1 bit
                //cout << 1;
                cout << objects.at(bit) << ", ";
            }
            else // the bit is 0
            {
                // do something for a 0 bit
                //cout << 0;
            }
        }
    }
}