#include <iostream>
	using namespace std;
	int main() {
	    int a = 0,N ,i = N;
			while (i > 0) {
			    a += i;
			    i /= 2;
          //after every iteration i is divided by 2
          //so if value of N is 4 then it will be 2 and then 1
          //Hence value of N = 2^k
          //and if we take log on both sides
          //logN(base 2) = k
          //where k = no. of iterations
          //Complexity  = O(k) = O(log(n))
			}
			return 0;
	}