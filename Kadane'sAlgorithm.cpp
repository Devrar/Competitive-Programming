/*
Lorenzo Demeio
Competitive Programming and Contests
*/

/*
Solution Description:
We store the values in an array, and we read it from left to right.
In a variable we store the value of the max_sum of a sub-array seen
till where we arrived, and in another one the value of the sum of the
sub-array we are scrolling. When the sum of the sub-array we are 
scrolling becomes negative, we reset the value of the current
sum and keep reading the array.
*/

#include <iostream>
using namespace std;

int main() {
	
	int max_sum = -101;
	int current_sum = 0;
	int T, N;
	int arr[1001];
	
	cin >> T;
	
	for (int i = 0; i < T; ++i)
	{
	    cin >> N;
	    
	    for (int i = 0; i < N; ++i)
	    {
	        cin >> arr[i];
	        
	        current_sum += arr[i];
	        
	        if (current_sum > max_sum)
	            max_sum = current_sum;
	            
	        if (current_sum < 0)
	            current_sum = 0;
	    }
	    
	    cout << max_sum << endl;
	    max_sum = -101;
	    current_sum = 0;
	}
}
