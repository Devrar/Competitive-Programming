/*
 * Lorenzo Demeio
 * Competitive Programming and Contests
 * */
  
/*
 * SOLUTION DESCRIPTION:
 * We read the values from the standard input, 
 * store them in an array, and then read the
 * array backwords, storing the max value seen
 * till where we arrived.
 * */

#include <iostream>

using namespace std;

int T, N;
int max_num = -1;
int val[10000001];

int main(){

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> N;

        for (int i = 0; i < N; ++i)
            cin >> val[i];

        for (int i = N-1; i >= 0; --i)
        {
            if (val[i] >= max_num)
                max_num = val[i];

            else
                val[i] = -1;
        }

        for (int i = 0; i < N; ++i)
        {
            if (val[i] != -1)
                cout << val[i] << " ";
        }

        cout << "\n";

        max_num = 0;
    }
}
