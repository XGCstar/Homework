//第一题
#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a;
b=a/100+a%10+(a/10)%10;
cout<<b<<endl;
}

//第二题
#include<iostream>
using namespace std ; 
 int main ()
 {
 int n ;
 cin>>n ;
 cin.get();
 int arr[100];
 for (int a = 0 ; a < n ; a++)
 {
 cin>>arr[a];
 cin.get();
 }
 for (int b = 0; b < n ; b++)
 {
 int k = arr[b]; int num = 0;
 for (int c = b +1 ; c < n ; c++)
  {
 if (arr[c]== k){
 num++;}
 }
 if (num == 1){
 cout<<arr[b]<<' ';}
 }
 return 0;
}

//第三题
#include<iostream>
#include<string>
#include<cstring>
int YorN(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')||(ch='_')||(ch='-'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	using namespace std;
	char str[100];
	cin.getline(str,100);
	int len=strlen(str);
	if(str[0]=='@'||str[len-1]=='@'||str[len-1]=='.')
	{
		cout<<"no"<<endl;
		return 0;
	}
	int num=0;
	for(int i=0;i<len-1;i++)
	{
		if(str[i]=='@'||str[i]=='.')
		{
			num++;
		}
	}
	if(num!=2)
	{
		cout<<"no"<<endl;
		return 0;
	}
	char username[100];
	char domain[100];
	char com[100];
	int a;
	for(a=0;a<len;a++)
	{
		if(str[a]=='@')
		{
			break;
		}
		else if(YorN(str[a]))
		{
			username[a]=str[a];
		}
		else
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	int num1=0;
	int b;
	for(b=a+1;b<len;b++)
	{
		if(str[b]=='.')
		{
			break;
		}
		else if(YorN(str[b]))
		{
			domain[num1]=str[b];
			num1++;
		}
		else
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	int num2=0;
	for(int c=b+1;c<len;c++)
	{
		if(YorN(str[c]))
		{
		    com[num2]=str[c];
		    num2++;
		}
		else
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	for(int j=0;j<len;j++)
	{
		if(str[j]=='.')
		{
			if(str[j-1]=='@')
			{
				cout<<"no"<<endl;
				return 0;
			}
		}
	}
	cout<<"yes"<<endl;
    return 0;
}

//第四题
#include<iostream>
using namespace std;
int min(int a1,int a2)
{
	if(a1 > a2)
	{
		return a2;
	}
	else
	{
		return a1;
	}
}
int Max(int a,int b)
{
	int max=0;
	for( int i = 1 ;i <= min(a,b); i++)
	{
		if( a % i == 0 && b % i == 0 && i > max)
		{
			max = i;
		}
	}
	return max;
}
int Min(int a,int b)
{
	return a * b / Max(a,b);
}
int main()
{
	int down[100],up[100];
	int n;
	cin>>n;
	for(int i = 0; i < n ; i++)
	{
		cin>>up[i];
		cin>>down[i];
		if(down[i] == 0)
		{
			cout<<"error";
			return 0;
		}
	}
	int index = Min(down[0],down[1]);
	if(n > 2)
	{
	    for(int i = 2 ; i < n ; i++)
	    {
		    index=Min(index,down[i]);
	    }
    }
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		sum += up[i]*(index/down[i]);
	}
	int temp = Max(sum,index);
	if(temp != 1)
	{
		sum /= temp;
		index /= temp;
	}
	else if(sum == index)
	{
		cout<<'1'<<endl;
		return 0;
	}
	else if(sum == 0)
	{
		cout<<'0'<<endl;
		return 0;
	}
	cout<<sum<<"/"<<index<<endl;
	return 0;
}

//第五题
#include<iostream>
#include<cstring>
using namespace std;
int Num(char a[],char b)
{
	int n = strlen(a);
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == b)
		{
			num++;
		}
	}
	return num;
}
int main()
{
	char str[100];
	cin.getline(str,100);
	int c = 0;
	int len = strlen(str);
	int num[100] = {};
	for(int j = 0; j<len ; j++ )
	{
		num[j] = Num(str,str[j]);
	}

	int relist[100];
	int index = 0;
    for( int n = 0; n<len ; n++ )
    {
    	int max = 0;
    	for( int m = 0; m<len ; m++ )
    	{
    		if(num[m] > max)
    		{
    			max = num[m];
    			index = m;
			}
		}
		relist[n] = index;
		num[index]= 0 - num[index];
		max = 0;
	}
	int d = 26;
	for(int j = 0; j<len; j++)
	{
		c = d + c;
		if( str[relist[j]] != str[relist[j+1]] )
		{
			d--;
		}
		else
		{
			continue;
		}
	}
	cout<<c;
	return 0;
}
