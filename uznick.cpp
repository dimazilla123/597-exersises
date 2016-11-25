#include <iostream>

int main()
{
	int a,b,c,d,e;
	bool yes[6]={false,false,false,false,false,false};
	std::cin>>a>>b>>c>>d>>e;
	yes[0]=!((a>d)||(b>e));
	yes[1]=!((b>d)||(a>e));
	yes[2]=!((a>d)||(c>e));
	yes[3]=!((c>d)||(a>e));
	yes[4]=!((b>d)||(c>e));
	yes[5]=!((c>d)||(b>e));

	bool answer=yes[0]||yes[1]||yes[2]||yes[3]||yes[4]||yes[5];
	if(answer) std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}
