#include <iostream>
using namespace std;
int main() {
    int i, j, k = 0, N;
		for (i = N / 2; i <= N; i++) {
      //The outer loop runs n/2 times 
		    for (j = 2; j <= N; j = j * 2) {
		        k = k + N / 2;
          //in inner loop j gets doubled every iteration
          //Hence, n = 2^k
          //if we take log at both sides
          //logn(base2) = k
		    }
		}
    //Hence time complexity of both the loops will be 
    // O(n/2 * log(n))
    // = O(nlog(n)) as we ignore the constant as nlog(n) are the dominant terms.
		return 0;
}