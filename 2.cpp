#include <iostream>

int x,y,n;
bool check(int t)
{
	return t/x+t/y>n-1;
}
int main()
{
	std::cin>>n>>x>>y;
	
	int r=0,l=n+1;
	while(r-l>0)
	{
		m=(r+l)/2;
		if(check(m)) r=m;
		else l=m;
	}
	std::cout<<min(x,y)+r;
	
	return 0;
}