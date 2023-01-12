#include<iostream>
using namespace std;
int main()
{

	float  n ,v;
	cout<<"enter f_n"<<endl;
	cin>>n;
	cout<<"enter s_n"<<endl;
	cin>>v;
	if(v==0)
	{
	cout<<"incorrect input"<<endl;
	}
	else
	{
	cout<<"the result of div = "<<n/v;
	}
	/*
	float a;
	char cur;
	cout<<"enter amount of currencies"<<endl;
	cin>>a;
	cout<<"what is your currencies D OR E"<<endl;
	cin>>cur;
	if(cur=='d')
	{
	cout<<"your amount in pound edual "<<a*28<<endl;
	}
	else if(cur=='e')
	{
	cout<<"your amount in pound edual "<<a*32<<endl;
	}
	else
	{
	cout<<"incorrect currencies"<<endl;
	}

	*/
	/*
	float f_n , s_n;
	char c;
	cout<<"enter f_n"<<endl;
	cin>>f_n;
	cout<<"enter operation"<<endl;
	cin>>c;
	cout<<"enter s_n"<<endl;
	cin>>s_n;
	if(c=='+')
	{
		cout<<"the op of addition = "<<f_n+s_n<<endl;

	}
	else if(c=='-')
	{
		cout<<"the op of sub = "<<f_n-s_n<<endl;

	}
	else if(c=='/')
	{

		cout<<"the op of div = "<<f_n/s_n<<endl;

	}
	else if(c=='*')
	{
		cout<<"the op of mult = "<<f_n*s_n<<endl;

	}
	else
	{
		cout<<"enter correct operation"<<endl;
	}
	*/




	system("pause");
	return 0;

}