#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string names[n];unordered_map<string,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>names[i];
		if(mp.find(names[i])==mp.end())
		{
			mp.insert(make_pair(names[i],0));
		}
	}
	for(int i=0;i<n;i++)
	{
		string nam;int amt;int no;
		cin>>nam>>amt>>no;
		string rec[no];
		for(int j=0;j<no;j++)
		cin>>rec[j];
		mp[nam]-=amt;
		for(int j=0;j<no;j++)
		{
			mp[rec[j]]+=(int(amt/no));
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<names[i]<<" "<<mp[names[i]]<<endl;
	}
	
}
