#include <iostream>

int abs(int x)
{
	if(x>=0)
		return x;
	else 
		return -x;
}

int main()
{
	int time[2][3];
	for(int i=0;i<3;i++)
		std::cin>>time[0][i];
	for(int i=0;i<3;i++)
		std::cin>>time[1][i];

	int time1=time[0][0]*3600+time[0][1]*60+time[0][2];
	int time2=time[1][0]*3600+time[1][1]*60+time[1][2];
	std::cout<<abs(time1-time2)<<std::endl;

	return 0;
}
