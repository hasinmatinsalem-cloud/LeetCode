#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums)
	{
		int ir = 1, iw = 1, k = 1;
		int preview = nums[0];
		if (nums.size() < 2)
			return 1;
		for (ir; ir < nums.size(); ir++)
		{
			if (nums.at(ir) != preview)
			{
				k++;
				preview = nums.at(ir);
				nums.at(iw) = nums.at(ir);
				iw++;
			}
		}
		return k;
	}
};
int main()
{
	vector <int> nums2{ 0, 1, 1, 2, 3, 3, 3, 4, 5 };
	vector <int> nums1{ 1, 2, 3, 3, 4, 5, 8, 8, 10 };

	Solution slt;
	cout << slt.removeDuplicates(nums1) << endl;
	cout << slt.removeDuplicates(nums2) << endl;
}
