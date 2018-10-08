/*
Lorenzo Demeio
Competitive Programming and Contests
*/

/*
Solution Description:
We store the values in a vector, and we use a deque to scan it.
We constrain the size of the deque to be k. When we have to add 
a new element to the deque, we pop all the elements from the back
that are not greater than the value we add and we push it in the
back. At every step the maximal elements of the sub-array is the 
head of the deque.
*/

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
vector<T> SWM(vector<T> const& A, int k)
{

    deque<int> Q;

    vector<T> maxs;
    maxs.reserve(A.size() -k+1);

    for (int i = 0; i < A.size(); ++i)
    {
        while ((!Q.empty()) && Q.front() <= i-k)
            Q.pop_front();

        while ((!Q.empty()) && A[i] >= A[Q.back()])
            Q.pop_back();

        Q.push_back(i);

        if (i >= k-1)
            maxs.push_back(A[Q.front()]);
    }

    return maxs;
}

int main()
{
    int N, k, T;
    vector<int> maxs;
    
    cin >> T;
    
    for (int i = 0; i < T; ++i)
    {
        vector<int> A;
        cin >> N;
        cin >> k;
        A.resize(N);
    
        for (int i = 0; i < N; ++i)
            cin >> A[i];
    
        maxs = SWM(A, k);
    
        for (int i = 0; i < N-k+1; ++i)
            cout << maxs[i] << " ";
            
        cout << endl;
    }
}
