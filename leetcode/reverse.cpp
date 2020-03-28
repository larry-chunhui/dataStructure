#define INT_MAX 10000000
#define INT_MIN -10000000

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            // x /= 10;
		x=x/10;
          //  if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
          //  if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
	
        return rev;
    }
};


#include<iostream>
using namespace std;
int main()
{

    int m=12345;	
    Solution sol;    // Creating an object
    cout <<sol.reverse(m)<< "\n";  // Calling function
    
    return 0;
}
