#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n1 = 3;
    int n2 = 5;

    vector<int> v{0, 1, 2, 3, 4, 4, 6, 7, 3, 2, 6, 8, 10, 2, 3, 6, 12, 6, 7};

    auto result1 = find(begin(v), end(v), n1);

    if (result1 != end(v)) {
        cout << "v contains: " << n1 << endl;
		auto index = distance(begin(v), result1);
		v.erase(begin(v) + index);
		auto result2 = find(begin(v), end(v), n1);
		if(result2 != end(v)) {
			cout << "second one found of: " << n1 << endl;
		}
	}

	return 0;
}

