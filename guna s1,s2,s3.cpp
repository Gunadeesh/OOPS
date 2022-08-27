#include<iostream>
using namespace std;
class  sample
{
	public:
		int a,b,c;
		void getdata();
		void putdata();
};
void sample::getdata()
{
	cout<<"enter the values for a and b and c :";
	cin>>a>>b>>c;
}

void sample::putdata()
{
	cout<<"the values of a and b is "<<a<<"\t"<<b<<"\t"<<c<<"\n";

}

int main()
{
	sample s1,s2,s3;
	s1.getdata();
	s1.putdata();
	s2.getdata();
	s2.putdata();
	s3.getdata();
	s3.putdata();
	return 0;
}
