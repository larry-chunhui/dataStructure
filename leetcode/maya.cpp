#include <iostream>
#include <sys/resource.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <algorithm>
#include <vector>


using namespace std;

class Answer
{
public:
//	static bool exists(int ints[], int size, int k)
	static bool exists()
	{
		// return false;
		cout<< "hello chunhui \n";
	}

};

int main()
{
    Answer an;    // Creating an object
    an.exists();  // Calling function

    return 0;
}
