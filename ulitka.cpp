#include <iostream>

int main()
{
	int h;int a;int b;
	std::cin>>h;
	std::cin>>a;
	std::cin>>b;
	int t=(h-b)/(a-b);
	//std::cout<<"t is: "<<t<<std::endl;

	bool isX=((h-b)%(a-b)|0);
	//std::cout<<"isX is: "<<isX<<std::endl;
	t=t+isX;
	std::cout<<t<<std::endl;

	return 0;
}
