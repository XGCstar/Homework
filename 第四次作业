//三位数各位数之和
#include<iostream>
#include<stdio.h>
using namespace std;

class Sanweishu{
public:
 void sanweishu(int a)
 {
 	int i,j,k;
 	i=a%10;
 	k=a/100;
 	j=(a-i-k*100)/10;
 	cout<<i+j+k;
 }
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	Sanweishu san;
	san.sanweishu(n);
	return 0;
} 





//季节转换
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






//年龄段转换
#include<iostream>
#include<stdio.h>
using namespace std;

class Age{
public:
	void age()
	{
		int n;
		cin>>n;
		if(1<=n&&n<=10)
		{
			cout<<"Childern";
		}
		if(11<=n&&n<=20)
		{
			cout<<"Teenagers";
		}
		if(21<=n&&n<=40)
		{
			cout<<"Youth";
		}
		if(41<=n&&n<=50)
		{
			cout<<"middle-aged";
		}
		if(51<=n&&n<=80)
		{
			cout<<"Elderly";
		}
		if(81<=n&&n<=100)
		{
			cout<<"Old man";
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Age a;
	a.age();
	return 0;
}





//成绩转换
#include<iostream>
#include<stdio.h>
using namespace std;

class Grade{
public:
 void grade()
 {
 	int n;
 	cin>>n;
 	if(n>=90)
 	{
	 cout<<"A";
	}
	if(n>=80&&n<90)
 	{
	 cout<<"B";
	}
	if(n>=70&&n<80)
 	{
	 cout<<"C";
	}
	if(n>=60&&n<70)
 	{
	 cout<<"D";
	}
	if(n<60)
 	{
	 cout<<"E";
	}
  } 
}; 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Grade g; 
	g.grade();
	return 0;
}





//时间转换
#include<iostream>
#include<stdio.h>
using namespace std;

class Time{
public:
	int time(int a)
	{
	int b;
	if(a<100)
	{
	 if(a<=9){
	 printf("16%0d",a);}
	 if(a>9){
	 printf("16%d",a);}
	}
	if(a>=100)
	{
	 b=a/100;
	 a=a%100;
	 b=b-8;
	 if(b<0){
	 b=b+24;}
	 if(b!=0){
	  if(a<10){
	  printf("%d0%d",b,a);}
	  if(a>=10){
	  printf("%d%d",b,a);}
     }
	 if(b==0){
	 printf("%d",a);}	
	}
	 }	
};

int main()
{
	int a;
	Time t; 
	cin>>a;
	t.time(a);
	return 0;
}
