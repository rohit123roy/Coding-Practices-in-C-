/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,max=0;
		cin>>n;
		string s;
		while(n--)
		{
			string s1;
			cin>>s1;
			if(s1.length()>max)
			{
				s=s1;
				max=s1.length();
			}
		}
		cout<<s<<"\n";
	}	
	return 0;
}