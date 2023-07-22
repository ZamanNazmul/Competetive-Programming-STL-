// CPP program to create an empty vector
// and push values one by one.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Create an empty vector
	vector<int> vect;

	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(30);

	for (int x : vect)
		cout << x << " ";

	return 0;
}

// CPP program to create an empty vector
// and push values one by one.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 3;

	// Create a vector of size n with
	// all values as 10.
	vector<int> vect(n, 10);

	for (int x : vect)
		cout << x << " ";

	return 0;
}



// CPP program to initialize a vector like
// an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect{ 10, 20, 30 };

	for (int x : vect)
		cout << x << " ";

	return 0;
}



// CPP program to initialize a vector from
// another vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vect1{ 10, 20, 30 };

	vector<int> vect2(vect1.begin(), vect1.end());

	for (int x : vect2)
		cout << x << " ";

	return 0;
}
