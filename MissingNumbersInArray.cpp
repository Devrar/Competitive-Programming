/*
Lorenzo Demeio
Competitive Programming and Contests
*/

/*
Solution Descriptio:
We create an array with the values from 1 to N, and then delete
the values from the input and print the only one which remains.
*/

#include <iostream>
using namespace std;

int arr[10000001];

int main() {
    
	int N, T;
	int current_num;
	
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
	    cin >> N;
	    
	    for (int i = 0; i < N; ++i)
	    {
	        arr[i] = i + 1;
	    }
	    
	    for (int i = 0; i < N - 1; ++i)
	    {
	        cin >> current_num;
	        
	        arr[current_num - 1] = -1;
	    }
	    
	    for (int i = 0; i < N; ++i)
	    {
	        if (arr[i] != -1)
	        {
	            cout << arr[i] << endl;
	        }
	    }
	}
}
