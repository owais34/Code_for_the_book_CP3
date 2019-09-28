#include<bits/stdc++.h>

using namespace std;

int main()
{
	float h=1,d,u,f;
	vector<bool> success;vector<int> day;
	while(true)
	{
		cin>>h>>u>>d>>f;
		if(h==0)
		break;
		float dis=0;int i=1;f=(f/100)*u;
		while(dis<h)
		{	dis+=(u-d);
			if(u-d<=0&&dis<=0)
			{
				success.push_back(false);day.push_back(i);break;
			}
			
			u-=f;
			if(u<0)
			u=0;
			i++;
		}
		if(dis>=h)
		{
			success.push_back(true);day.push_back(i-1);
		}
		
	}
	for(int i=0;i<success.size();i++)
	{
		if(success[i])
		cout<<"success on day "<<day[i]<<endl;
		else
		cout<<"failure on day "<<day[i]<<endl;
	}
}
