#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> file;stack<char> st;  
	string line;string out="";
	while(getline(cin,line))
	{
    if (line.empty())
       break;
    file.push_back(line);
	}
	for(int i=0;i<file.size();i++)
	{	//cout<<file[i];
	for(int j=0;j<file[i].length();j++)
		{ char ch=file[i][j];
		if(ch==char(34))
		{	if(st.size()!=0)
			{
			if(st.top()==char(34))
			{
			out=out+"''";st.pop();}}
			else
			{
				out=out+"``";st.push(char(34));
			}
		}
		else
		out=out+ch;
		}
		out=out='\n';
	}
	cout<<out;
}
