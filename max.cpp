#include <iostream>

int main()
{
	int a;int b;
	std::cin>>a;
	std::cin>>b;

	bool isA=a/b;
	bool isB=b/a;
	bool isSame=isA*isB;

	std::cout<<(a*isA)+(b*isB)*!isSame<<std::endl;

	return 0;
}
