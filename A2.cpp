#include<iostream>
using namespace std;
int main()
{
	char a[4]="abc";
	for(char *cp=a;(*cp)!='\0';cp++)
	{
		cout<<(void*)cp<<" : "<<(*cp)<<endl;
	}
	return 0;
	//kich thuoc kieu int la 4, double la 8
}
