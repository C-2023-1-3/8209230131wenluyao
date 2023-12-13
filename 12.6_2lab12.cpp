#include<iostream>
#include<string>
using namespace std;

int indexOf(const char* s1, const char* s2)
{
	int len1 = strlen(s1), len2 = strlen(s2), space(0);
	for (int i = 0; i < len2; i++)
	{
		if (s2[i] == ' ')
		{
			space++;
			continue;
		}
		if (s1[0] == s2[i])
		{
			for (int j = i, m = 0; j < i + len1; m++, j++)
			{
				if (s1[m] == s2[j])
				{
					if (j - i >= len1 - 1)
						return i + 1 - space;
				}
				else
					break;
			}
		}
		if (len2 - i + 1 < len1)
			return -1;
	}
}
int main()
{
	int size = 999;
	char s1[999], s2[999];
	cout << "Enter the first string: ";
	cin.getline(s1, size);
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(" << s1 << ',' << s2 << ") is " << indexOf(s1, s2);
	return 0;
}