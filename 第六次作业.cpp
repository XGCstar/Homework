/*教授的课*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Class{
public:
	int IsCancal(int n,int k)
	{
		int a[n],K=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<0)
			{
				K++;
			}
		}
		if(K<k)
		{
			cout<<"Yes";
		}
		if(K>=k)
		{
			cout<<"No";
		} 
	}
}; 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	Class c;
	c.IsCancal(n,k);
	return 0;
}





/*指针排序*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Sort{
public:
	int sort(int num[],int n)
	{
		int min,i,j,b[n],k,flag;
		for(i=0;i<n;i++)
		{
			min=num[i];
			for(j=i+1;j<n;j++)
			{
				if(min>num[j])
				{
					min=num[j];
					flag=j;
				}
			}
			k=num[i];
			num[i]=num[flag];
			num[flag]=k;
			b[i]=min;
		}
	    for(i=0;i<n;i++)
	    {
		printf("%d ",b[i]);
	    }
    }
};

#include<iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	Sort S;
	S.sort(num,n);
	return 0;
}






/*字符串比较*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Location{
public:
	void Lo(char ch1[],char ch2[])
	{
		int flag;
		for(int i=0;;i++)
		{
			flag=0;
			if(ch2[i]=='\n')
			{
				break;
			}
			if(ch2[i]==ch1[0])
			{
				for(int j=1;;j++)
				{
					if(ch1[j]=='\n')
					{
						break;
					}
					if(ch2[i+j]==ch1[j])
					{
						flag=1;
						continue;
					}
					if(ch2[i+j]!=ch1[j])
					{
						flag=0;
						break;
					}
				    flag=0;
				}
			}
			if(flag==1)
			{
				printf("%d ",i+1);
			}
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char ch1[100]={'\0'},ch2[100]={'\0'};
	int a=-1,b=-1;
	do
	{
	a++;
	ch1[a]=getchar();
	if(ch1[a]==' ')
	{
		a--;
	}
	}while(ch1[a]!='\n');
	do
	{
	b++;
	ch2[b]=getchar();
	if(ch2[b]==' ')
	{
		b--;
	}
	}while(ch2[b]!='\n');
	Location L;
	L.Lo(ch1,ch2);
} 





/*密钥格式化*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Geshihua{
public:
	void geshihua()
	{
		int i,j,a=-1,b,n,ch[100];
		do
		{
			a++;
			ch[a]=getchar();
			if(ch[a]=='-')
			{
				a--;
			}
		}while(ch[a]!='\n');
		cin>>n;
		b=a%n;
		if(b==0)
		{
			for(i=0;i<a;i++)
			{
				if('a'<=ch[i]&&ch[i]<='z')
				{
					printf("%c",ch[i]-32);
				}
				if(ch[i]>'z'||ch[i]<'a')
				{
					printf("%c",ch[i]);
				}
				if((i+1)%n==0&&i<a-1)
				{
					printf("-");
				}
			}
		}
		if(b!=0)
		{
			for(i=0;i<b;i++)
			{
				printf("%c",ch[i]);
			}
			printf("-");
			for(i=b;i<a;i++)
			{
				if('a'<=ch[i]&&ch[i]<='z')
				{
					printf("%c",ch[i]-32);
				}
				if(ch[i]>'z'||ch[i]<'a')
				{
					printf("%c",ch[i]);
				}
				if((i+1-b)%n==0&&i<a-1)
				{
					printf("-");
				}
			}
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Geshihua G;
	G.geshihua();
	return 0;
}





/*标准电话号码*/
#include<iostream>
#include<stdio.h>
using namespace std;

class phone_number{
public:
	void transform()
	{
		char ch[1000];
		int a=-1,b[1000];
		do
		{
			a++;
			ch[a]=getchar(); 
			if(ch[a]=='A'||ch[a]=='B'||ch[a]=='C')
			{
				b[a]=2;
			}
			if(ch[a]=='D'||ch[a]=='E'||ch[a]=='F')
			{
				b[a]=3;
			}
			if(ch[a]=='G'||ch[a]=='H'||ch[a]=='I')
			{
				b[a]=4;
			}
			if(ch[a]=='J'||ch[a]=='K'||ch[a]=='L')
			{
				b[a]=5;
			}
			if(ch[a]=='M'||ch[a]=='N'||ch[a]=='O')
			{
				b[a]=6;
			}
			if(ch[a]=='P'||ch[a]=='Q'||ch[a]=='R'||ch[a]=='S')
			{
				b[a]=7;
			}
			if(ch[a]=='T'||ch[a]=='U'||ch[a]=='V')
			{
				b[a]=8;
			}
			if(ch[a]=='W'||ch[a]=='X'||ch[a]=='Y'||ch[a]=='Z')
			{
				b[a]=9;
			}
		}while(ch[a]!='\n');
		for(int i=0;i<a;i++)
		{
			cout<<b[i];
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	phone_number P;
	P.transform();
	return 0;
}
