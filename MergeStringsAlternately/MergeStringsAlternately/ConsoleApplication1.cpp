#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mainstr = "";
        int i = 0, j = 0;
        int n1 = word1.size(), n2 = word2.size();

        while (i < n1 || j < n2) {
           if ( i < n1) mainstr += word1[i++];
           if ( j < n2)mainstr += word2[j++];
        }

        return mainstr;
    }
};

int main()
{
	Solution slt1;
	string str1 = "Google";
	string str2 = "Amazon";

	cout << slt1.mergeAlternately(str1, str2);
}