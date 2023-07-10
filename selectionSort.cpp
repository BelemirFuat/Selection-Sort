#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int boyut = 10;
	int dizi[boyut];
	
	srand(time(0));
	
	for(int i=0;i<boyut;i++)
	{
		dizi[i]=rand()%100+1;
	}
	cout<<"diziniz: "<<endl;
	for(int i=0;i<boyut;i++)
	{
		cout<<dizi[i]<<endl;
	}
	int asgariIndex=0,gecici;
	for(int i=0;i<boyut;i++)
	{
		asgariIndex=i;
		for(int j=asgariIndex+1;j<boyut;j++)
		{
			if(dizi[asgariIndex]>dizi[j])
				asgariIndex=j;
		}
		if(asgariIndex!=i)
		{
			gecici=dizi[i];
			dizi[i]=dizi[asgariIndex];
			dizi[asgariIndex]=gecici;
		}
	}
	cout<<"siralanmis diziniz: "<<endl;
	
	for(int i=0;i<boyut;i++)
	{
		cout<<dizi[i]<<endl;
	}
}