#include <iostream>
using namespace std;
//Calculating Time Complexity and space Complexity
//Assuming every single code statement takes 1 time.
int main() {
    int sum = 0;//Time = 1
    int N;//Time = 1
    for (int i = 0; i < N; i++) {
        for (int j = N; j > i; j--) {
            sum = sum + i + j;
            //these for loops will run for time = n + n-1 + n-2 + ... + 1 + 0
            // = n(n+1)/2
            // = (n^2 + n)/2
            //But the constants are not considered as n^2 >>>>>> n or 1
            //Hence Complexity will be O(n^2)
        }

    }
    cout << sum << '\n';
	return 0;
}