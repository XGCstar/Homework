//第一题
#include<iostream>
using namespace std; 
int main()
{
 int N,num,i,j,k;
 cin>>N;
 for(i=0;i<N;i++)
 {
 	int a[15][15]={0};
    for(i=0;i<15;i++)
  {
 	a[i][0]=1;
 	a[i][i]=1;
  }
  cin>>num;
 	for(i=2;i<num;i++)
 	{
 		for(j=1;j<i;j++)
 		{
		 a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
 	}
 	for(i=0;i<num;i++)
 	{for(j=0;j<=i;j++)
	 {
	 if(j<i){
	 printf("%d ",a[i][j]);}
	 if(j==i){
	 printf("%d\n",a[i][j]);}
	 }
    }
 }
}

//第二题
#include<iostream>
using namespace std;
int main()
{int num1,num2,i=0,j,k;
 int a[100];
 cin>>num1;
 while(num1!=0)
 {
    a[i]=num1%8;
	num1=num1/8;
	i++;
 }
 i--;
 if(i<5)
 {
  for(k=1;k<5-i;k++)
  {
  cout<<"0";
  }
  for(j=i;j>=0;j--)
  {
  cout<<a[j];
  }
 }
 if(i==5)
 {
  for(j=i;j>=0;j--)
  {
  cout<<a[j];
  }
 }
}

//第三题
#include<iostream>
#include<stdio.h>
using namespace std; 

class transform{
public:
	void two_num(int num1,int num2)
	{
	 a=num1;
	 b=num2;
	}
	int trans()
	{
	 int i=0,j;
		while(a!=0)
		{
		 num[i]=a%b;
		 a=a/b;
		 i++;
		}
		i--;
	 for(j=i;j>=0;j--)
	 {
	  cout<<num[j];
	 }
	 cout<<endl; 
	}
private:
    int a;
    int b;
    int num[100];
};

#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{int n,k,num1,num2;
 cin>>n;
 for(k=0;k<n;k++)
 {
 cin>>num1>>num2;
 transform T;
 T.two_num(num1,num2);
 T.trans();
 }
}

//第四题
#include<iostream>
#include<stdio.h>
using namespace std;

class Week
{
public:
 int Year_day(int year)
 {
  int Y=0;
  for(int i=1900;i<year;i++)
  {
   if(i==1900)
   {
  	if(i%100!=0 && i%4==0)
  	{
  		Y=Y+365;
	}
	if(i%100==0 && i%400==0)
	{
		Y=Y+365;
	}
	if(i%100!=0 && i%4!=0)
	{
		Y=Y+364;
	}
   }
   if(i!=1900)
   {
   	if(i%100!=0 && i%4==0)
  	{
  		Y=Y+366;
	}
	if(i%100==0 && i%400==0)
	{
		Y=Y+366;
	}
	if(i%100!=0 && i%4!=0)
	{
		Y=Y+365;
	}
   }
  }
  return Y;
 }
 
 int Month_day(int year, int month)
 {
 	int M=0;
 	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	for(int j=1;j<month;j++)
 	{
 	 if(j!=2)
	 {
	    M=M+m[j-1];
	 }
 	 if(j==2)
 	 {
 	  if((year%100==0&&year%400==0) || (year%100!=0&&year%4==0))
 	  {
 	   M=M+29;	
	  }
	  if(year%4!=0)
	  {
	   M=M+28;
      }
	 }
	}
	return M;
 }
 int Day(int year,int month,int day)
 {
  if(year==1900&&month==1)
  {
 	return day-1;
  }
  else
  return day;
 }
 void week(int Total)
 {
  int T;
  T=Total%7;
  switch (T){
 	case 0:printf("Monday");
 	break;
 	case 1:printf("Tuesday");
 	break;
 	case 2:printf("Wednesday");
 	break;
 	case 3:printf("Thursday");
 	break;
 	case 4:printf("Fridy");
 	break;
 	case 5:printf("Saturday");
 	break;
 	case 6:printf("Sunday");
 	break;
  }
 } 
};
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
 int y,m,d,t=0;
 scanf("%d-%d-%d",&y,&m,&d);
 Week A;
 t=A.Year_day(y);
 t=t+A.Month_day(y,m);
 t=t+A.Day(y,m,d);
 A.week(t);
 return 0;
}

//第五题
#include<iostream>
#include<stdio.h>
using namespace std;

class Transform{
public:
	void trans(int a,int b)
	{
	 int n,i;
	 if(b<10)
	 {
	  int A1[100]; 
	  int j;
	  i=0; 
	  while(a!=0)
		{
		 A1[i]=a%b;
		 a=a/b;
		 i++;
		}
		i--;
	 for(j=i;j>=0;j--)
	 {
	  printf("%c",A1[j]);
	 }
	 printf("\n");
	 }
	 if(b>10)
	 {  int k,t;
	    int A2[100];
	    i=0;
	 	char B[15]={'F','E','D','C','B','A','9','8','7','6','5','4','3','2','1'};
	 	while(a!=0)
		{
		 a=a/b;
		 A2[i]=B[15-a];
		 i++;
		}
		i--;
		for(k=i;k>=0;k--)
	  {
	  printf("%c",A2[k]);
	  }
	  printf("\n");
	 }
	 }
}; 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
 int i,num,num1,num2;
 cin>>num;
 for(i=0;i<num;i++)
 {
  cin>>num1>>num2;
  Transform tr;
  tr.trans(num1,num2);
 }
  return 0;
}
