#include"headers.h"
#include"declaration.h"

int Distance::add_distance(Distance &d1, Distance d2)
{
    cout<<"Begin: "<<__func__<<endl;
    inch = d1.inch + d2.inch;
    feet = d1.feet + d2.feet;
    if(inch >= 12){
	 feet += 1;
         inch -= 12;
    }	 
    cout<<"End: "<<__func__<<endl;
    return 0;
}
