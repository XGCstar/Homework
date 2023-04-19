//计算圆的周长面积
#include<iostream>
#include<stdio.h>
using namespace std;
class Circle{
public:
	int D(int r)
	{   float d;
		d=2*r;
		printf("直径=%.2f",d);
	}
	int C(int r)
	{
		float c;
		c=3.14*r;
		printf("周长=%.2f",c);
	}
	int S(int r)
	{
		float s;
		s=3.14*r*r;
		printf("面积=%.2f",s);
	}
}; 

int main()
{
	float R;
	Circle cir;
	cin>>R;
	cir.D(R);
	cout<<endl;
	cir.C(R);
	cout<<endl;
	cir.S(R);
	cout<<endl; 
	return 0;
}





//平均值与方差
#include<iostream>
#include<stdio.h>
using namespace std;

class Math{
public:
	float M(int a,int b,int c,int d,int e,int f)
	{
		float P,a1,b1,c1,d1,e1,f1;
		a1=float(a);
		b1=float(b);
		c1=float(c);
		d1=float(d);
		e1=float(e);
		f1=float(f);
		P=(a1+b1+c1+d1+e1+f1)/6;
		printf("%.2f ",P);
		float F;
		F=((a1-P)*(a1-P)+(b1-P)*(b1-P)+(c1-P)*(c1-P)+(d1-P)*(d1-P)+(e1-P)*(e1-P)+(f1-P)*(f1-P))/6;
		printf("%.2f\n",F);
	}
}; 

int main()
{
	int n,i,a,b,c,d,e,f;
	cin>>n;
	Math A;
	for(i=0;i<n;i++)
	{
	cin>>a>>b>>c>>d>>e>>f;
	A.M(a,b,c,d,e,f);
    }
	return 0;
}





//时间换算
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






//回文数
#include<iostream>
#include<stdio.h>
using namespace std;
class Huiwen{
public:
	int huiwen()
	{
		int a,b;
		cin>>a>>b;
		int n,i,j,o=0;
		int M[10000];
		for(n=a;;n++)
		{
		 int flag=1;
		 j=n;
		 int k=0;
		 int N[10000];
		 while(j!=0)
		 {
		 	N[k]=j%10;
		 	j=j/10;
		 	k++;
		 }
		 k--;
		 for(i=0;i<=k/2;i++)
		 {
		 	if(N[i]!=N[k])
		 	{
			 flag=0;
			 break;
			}
			if(N[i]==N[k])
			{
			 k--;
			 continue;
			}
		 }
		 if(flag==1)
		 {
		  M[o]=n;
		  o++;
		 } 
		 if(o==b){
		 break;}
		 }
		 for(i=0;i<b;i++)
		 {if(i!=b-1){
		 	printf("%d ",M[i]);}
		  if(i==b-1){
			printf("%d\n",M[i]);}
		 }
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int C,i,a,b;
	cin>>C;
	Huiwen A; 
	for(i=0;i<C;i++)
	{
		A.huiwen();
	}
	return 0;
}





//成绩排名
#include<iostream>
#include<string.h>
using namespace std;

typedef struct
{
 char name[31];
 float Pinshi;
 float Qimo;
 float Total;
}stu;

class Rank
{
public:
    void input();
    void rank();
    void print();

private:
    int n;
    stu s[101];

};

void Rank::input()
{
 int i=0;
 char name[31];
 float Pinshi;
 float Qimo;
 while((cin>>name>>Pinshi>>Qimo))
 {
  strcpy(s[i].name,name);
  s[i].Pinshi=Pinshi;
  s[i].Qimo=Qimo;
  s[i].Total=Pinshi*0.4+Qimo*0.6;
  i++;
  }
 n=i;
}

void Rank::rank()
{
 stu tmp;
 for(int i=1;i<n;i++)
 {
  for(int j=0;j<n-i;j++)
  {
   if(s[j].Total<s[j+1].Total)
   {
    tmp=s[j];
    s[j]=s[j+1];
    s[j+1]=tmp;
   }
  }
 }
}

void Rank::Print()
{
 for(int i=0;i<n;i++)
 {
  printf("%s %.2f %.2f %.2f\n",s[i].name,s[i].Pinshi,s[i].Qimo,s[i].Total);
 }
}

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 Rank a;
 a.Input();
 a.rank();
 a.Print();
 return 0;
}
