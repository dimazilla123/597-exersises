#include <iostream>

short int res(int num)//-1 лево 0 она 1 право
{
	std::cout<<n;
	std::cout.flush();
	switch (std::cout.getchar())
	{
		case 'A'
		return -1;
		break;
		case 'G'
		return 1;
		break;
		case 'M'
		return 0;
		break;
	}
}
int main()
{
	int n;
	std::cin>>n;
	int l=0,r=n+1,c;
	while(l-r>1)
	{
		if(c==1) l=(r-l)/2+l;
		else r=(r-l)/2+l;
	}
	std::cout<<r;
	return 0;
}