#include<iostream>
#include<stdio.h>
using namespace std;

class Season{
public:
 void season()
 {
 	int n;
 	cin>>n;
 	switch(n)
 	{
 		case 1:cout<<"Spring";
 		break;
 		case 2:cout<<"Summer";
 		break;
 		case 3:cout<<"Fall";
 		break;
 		case 4:cout<<"Winter";
	}
 }
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
 Season s;
 s.season();
 return 0;
}
