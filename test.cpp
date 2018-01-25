#include <iostream> 
using namespace std;

class csifirdua
{
	int m;
	int n;
     public:
	 void set_val(int,int);
	 int hasilDarabdua()
	 {
	 	return m*n;
	 } 	
};
void csifirdua::set_val(int a,int b)
{
	m=a;
	n=b;
	cin>>m;
	cin>>n;
}

 int main()

{
   csifirdua oA1;
   oA1.set_val(5,6);
   cout<<"Hasil Darab Dua:"<<oA1.hasilDarabdua()<<endl;
}
