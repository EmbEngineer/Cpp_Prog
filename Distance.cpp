#include"headers.h"
#include"declaration.h"

Distance::Distance()
{
    cout<<"Zero Begin:"<<__func__<<endl;
      feet=0;
      inch=0.00;
    cout<<"Zero End:"<<__func__<<endl;
}

/*
Distance::Distance(Distance &d)
{
    cout<<"Copy Begin:"<<__func__<<endl;

    feet = d.feet ;
    inch = d.inch;    
    
    cout<<"Copy End:"<<__func__<<endl;
}
*/

Distance::Distance(int ft,float in)
{
    cout<<"Two Begin:"<<__func__<<endl;

      feet=ft;
      inch=in;
    
      cout<<"Two End:"<<__func__<<endl;
}


Distance::~Distance()
{
    cout<<"Begin:"<<__func__<<endl;
    cout<<" End:"<<__func__<<endl;
}
