#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[2*n],y[2*n];
	for(int i=0;i<2*n;i++)
	cin>>x[i];
	for(int i=0;i<2*n;i++)
	cin>>y[i];
	vector<bool>  status(2*n,true);
	float out=0;
	//using greedy method
	for(int i=0;i<2*n-1;i++)
	{
		float min=100000000;int index=0;
		for(int j=i+1;j<2*n;j++)
		{
			if(status[j])
			{
				if(sqrt(x[i]*x[j]+y[i]*y[j])<min)
				{
					min=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));index=j;
				}
			}
		}
		if(status[i])
		{
			status[index]=false;
			out=out+min;
		}
		
		
	}
	cout<<out<<endl;
	
	
}
