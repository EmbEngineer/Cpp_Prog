#include"headers.h"
#include"declaration.h"


void Distance::operator ++(int babu)
{
	cout<<"Begin: "<<__func__<<endl;
          
	++feet;
        ++inch;
         
	cout<<"End: "<<__func__<<endl;
}



void  Distance::operator +( int Babu)
{
	cout<<"Begin: "<<__func__<<endl;
          
	feet = feet + Babu;
	inch = inch + Babu;
         
	cout<<"End: "<<__func__<<endl;
}


void  Distance::operator +( Distance pk)
{
	cout<<"Begin: "<<__func__<<endl;
          
	feet = feet + pk.feet;
	inch = inch + pk.inch;
         
	cout<<"End: "<<__func__<<endl;
}	
