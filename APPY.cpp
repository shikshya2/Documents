#include<iostream>
using namespace std;
namespace first
{	
	void show()
	{
cout<<"SHIKSHYA\n";	
}

}
namespace second 
{
	void show()
	{
cout<<"ARCHANA\n";	
}

}
main()
{
	first::show();
	second::show();
}
