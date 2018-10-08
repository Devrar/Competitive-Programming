/*
Lorenzo Demeio
Competitive Programming and Contests
*/

/*
Solution Description:
We store the values in an array, then we compare the first element
with the last. We start from the shortest of these two and we
start adding the difference between the length of this one and
the other piles, till we encounter a higher one. The we do the
same thing with sub-array that's left.
*/

#include <iostream>
using namespace std;

int arr[1000001];

int water (int a, int b)
{
    int max_water = 0;
    
    if (a == b)
        return 0;
    
    else if (arr[a] < arr[b])
    {
        int i = a+1;
        while (arr[i] < arr[a])
        {
            max_water += arr[a] - arr[i];
            ++i;
        }
            
        if (i == b)
            return max_water;
            
        else
            return (max_water + water(i, b));
    }
    
    else
    {
        int j = b-1;
        while (arr[j] < arr[b])
        {
            max_water += arr[b] - arr[j];
            --j;
        }
        
        if (j == a)
            return max_water;
            
        else
            return (max_water + water(a, j));
    }
}

int main() {
	
	int T, N;
	
	cin >> T;
	
	for (int i = 0; i < T; ++i)
	{
	    cin >> N;
	    
	    for (int i = 0; i < N; ++i)
	        cin >> arr[i];
	        
	    cout << water (0, N-1) << endl;
	}
}
