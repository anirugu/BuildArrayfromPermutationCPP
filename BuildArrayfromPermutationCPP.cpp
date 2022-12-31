// BuildArrayfromPermutationCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> buildArray(vector<int>& nums) {
		vector<int> vals(10);
		for (auto i : vals) {
			cout << i << endl;
		}
		return vals; 
	}


};

int main()
{
	Solution sol;
	vector<int> vals;
	sol.buildArray(vals);
}

