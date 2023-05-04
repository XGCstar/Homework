/*最大公约数和最小公倍数*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Shu{
public:
	int Yue(int a,int b)
	{
		int min,i;
		if(a<=b){
		min=a;}
		if(a>b){
		min=b;}
		for(i=min;i>=1;i--)
		{
			if(a%i==0&&b%i==0)
			{
			printf("%d",i);
			break; 
			}
			else{
			continue;}
		}
	}
	
	int Bei(int a,int b)
	{
		int max,i;
		if(a<=b){
		max=b;}
		if(a>b){
		max=a;}
		for(i=max;;i++)
		{
			if(i%a==0&&i%b==0)
			{
			printf("%d",i);
			break;
			}
			else{
			continue;}
		}
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	Shu G;
	G.Yue(a,b);
	printf("\n");
	G.Bei(a,b);
}





/*使用函数求奇数和*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Jishu{
public:
 int even(int n)
 {
 	if(n%2!=0)
 	{
	 return 0;
	}
	if(n%2==0||n<=0)
	{
	 return 1;
	}
 }

}; 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n,i,j=0,k;
	int a[100],b[100];
	Jishu J;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		if(J.even(a[i])==0)
		{
			b[j]=a[i];
			j++;
		}
		if(a[i]<=0){
		break;}
	}
	j--;
	for(i=0;i<=j;i++)
	{
		k=k+b[i];
	}
	printf("%d",k);
}





/*分数精确值*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Fenshu{
public:
void fenshu(int a,int b)
     {
     	int shang,yu;
     	printf("0."); 
     	for(int i=0;i<=200;i++)
     	{
     		shang=a*10/b;
     		yu=a*10%b;
     		printf("%d",shang);
     		a=yu;
     		if(yu==0){
			break;}
		}
		printf("\n");
	 }
};

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	Fenshu F;
	F.fenshu(a,b);
}






/*多项式加法*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Duo{
public:
	void Jia()
	{
		int max=0,A[100]={0},a,b;
		while(scanf("%d %d",&a,&b)!=EOF)
		{
			A[a]=A[a]+b;
			if(max<a)
			{
				max=a;
			}
		}
		for(int i=max;i>1;i--)
		{
			if(A[i]==0)
			{
				max--;
			}
			if(A[i]!=0)
			{
			printf("%dx%d+",A[i],i);
		    }
		}
		if(A[1]!=0)
		{
		 printf("%dx+",A[1]);
		} 
		if(A[0]!=0)
		{
		printf("%d",A[0]);
	    }
	}
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Duo D;
	D.Jia();
}





/*鞍点*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Andian{
public:
	void zuobiao()
	{
		int n,i,j,k,max,flag,F;
		int a[n][n];
		cin>>n;
		for(i=0;i<n;i++)
		{
		 for(j=0;j<n;j++)
		 {
		 	cin>>a[i][j];
		 }
		}
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		for(j=1;j<n;j++)
		{
			if(max<a[i][j])
			{
			 max=a[i][j];
			 flag=j;
			}
		}
	 for(k=0;k<n;k++)
	 {  F=1;
		if(k==flag){
		continue;}
		if(k!=flag){
		if(a[i][flag]>a[i][k])
		F=0;}
	 }
	 if(F==1){
	 break;}
	 if(F==0){
	 continue;}
     }
    cout<<i+1<<" "<<flag+1;
    }
};

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Andian A;
	A.zuobiao();
	return 0;
}





/*超级素数*/
#include<iostream>
#include<stdio.h>
using namespace std;

class Super_sushu{
public:
	void sushu()
	{
		int n,i,j,k,flag1,flag2,flag3,flag4,he,ji,pfh,count=0,total=0,a[999];
		for(n=100;n<=999;n++)
		{
			for(i=2;i<n;i++)
			{
				flag1=0;
				if(n%i==0)
				{
					flag1=1;
					break;
				}
				if(n%i!=0)
				{
					continue;
				}
			}
		int bai,shi,ge;
		bai=n/100;
		shi=(n-bai*100)/10;
		ge=n-bai*100-shi*10;
		he=bai+shi+ge;
		ji=bai*shi*ge;
		pfh=bai*bai+shi*shi+ge*ge;
		for(i=2;i<he;i++)
		{
			flag2=0;
			if(he%i==0)
			{
				flag2=1;
				break;
			}
			if(he%i!=0)
			{
				continue; 
			}
		}
		for(i=2;i<ji;i++)
		{
			flag3=0;
			if(ji%i==0)
			{
				flag3=1;
				break;
			}
			if(ji%i!=0)
			{
				continue; 
			}
		}
		for(i=2;i<pfh;i++)
		{
			flag4=0;
			if(pfh%i==0)
			{
				flag4=1;
				break;
			}
			if(pfh%i!=0)
			{
				continue; 
			}
		}
		 if(flag1==0&&flag2==0&&flag3==0&&flag4==0)
		 {
			count++;
			total=total+n;
		 }	
		}
	cout<<count<<"\n"<<total;	
	}
}; 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	Super_sushu S;
	S.sushu();
}
