/*pow(x)*/
#include<iostream>
#include<stdio.h>
using namespace std;

class MI{
public:
	void mi(int a,int b)
	{
		int n,i;
		i=a;
		for(n=1;n<b;n++)
		{
			a=a*i;
		}
		cout<<a;;
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	MI m;
	m.mi(a,b);
	return 0;
}





/*单词长度*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Length{
public:
	void length()
	{
		char ch,a[1000]={'.'};
		int n,i=-1,j,k;
		do
		{
			i++;
			ch=getchar();
			a[i]=ch;
			
		}while(ch!='\n');
		for(n=0;n<i;n++)
		{
			if(a[n]!=' ')
			{
				j++;
			}
			if(a[n]==' ')
			{
				printf("%d ",j);
				j=0;
			}
			if(a[n]=='.')
			{
				j--;
				printf("%d",j);
				break;
			}
		}
		
	} 
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Length L;
	L.length();
	return 0;
}





/*颠倒二进制位*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Diandao{
public:
	void diandao()
	{
		int n,i=-1;
		char ch,a[32];
		do
		{
			i++;
			ch=getchar();
			a[i]=ch; 
		}while(ch!='\n');
		for(n=i-1;n>=0;n--)
		{
			cout<<a[n];
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Diandao D;
	D.diandao();
	return 0;
}





/*汉诺塔*/
#include<stdio.h>

void move(char A,char C,int n)
{
	printf("Move Disk%d from %c to %c\n",n,A,C);
}

void Hannuota(char A,char B,char C,int n)
{
	if(n==1)
	{
		move(A,C,n);
	}
	else
	{
		Hannuota(A,C,B,n-1);
		move(A,C,n);
		Hannuota(B,A,C,n-1);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	Hannuota('A', 'B', 'C', n);
	return 0;
}
