#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	int num[4]={n/1000,(n/100)%10,(n%100)/10,n%10};

	/*for(int i=0;i<4;i++)
	{
		std::cout<<num[i]<<std::endl;
	}*/
	int res1=(num[3]-num[0]);
	int res2=(num[1]-num[2]);
	int res=res1*res1+res2*res2;
	//std::cout<<(num[3]-num[0])<<" "<<(num[1]-num[2])<<std::endl;
	res++;
	std::cout<<res<<std::endl;

	return 0;
}
