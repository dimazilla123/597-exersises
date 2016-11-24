#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	
	int hours=(n/60)%24;
	int minutes=n%60;

	std::cout<<hours<<" ";

	std::cout<<minutes<<std::endl;

	return 0;
}
