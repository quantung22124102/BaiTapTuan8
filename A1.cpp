#include(iostream)
using namespace std;
void f(int xval)
{
	int x;
	x=xval;
	cout<<&x;
}
void g(int gval)
{
	int y;
	cout<<&y;
}
int main()
{
	f(7);
	g(11);
	return 0;
}
