#include <iostream>
using namespace std;
class decimal
{
	private:
		int i=1,j=n,n,Decimal=n,Binary=0;
	public:
			int deci()
			{
				cout<<"decimal number";
				cin>>n;
			}
			int bin()
			{
				for(j=n;j>0;j=j/2)
				{
					Binary=Binary+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<("Binary=",Decimal,Binary);
			}
		};
		int main()
		{
			decimal A;
			A.deci();
			A.bin();
		}