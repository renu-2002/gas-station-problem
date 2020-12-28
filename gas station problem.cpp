#include<iostream>
using namespace std;

int main()
{
    // initially tank of car is empty
    int tank=0;

    // we have N gas station
    int N;
    cin>>N;
    // gas at station is A[] and cost of gas is B[]
    int A[N], B[N];
    for(int i=0; i<N; i++)
    cin>> A[i];

    for(int i=0; i<N; i++)
    cin>> B[i];

    // first we will check that ( gas at station - cost of gas )>=0 or not when we complete our journey
    // if not then we simply return -1 else we find the starting station point
    // consume gas= gas st station - cost of gas
    int total=0, consume=0, index=0;
    for( int i=0; i<N; i++){
        consume= A[i] - B[i];
        tank += consume;

        if(tank < 0)
        {
            index=i+1;
            tank=0;
        }

        total += consume;
    }

    cout<< ( total< 0? -1: index);
    return  0;
}
