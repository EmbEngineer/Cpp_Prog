#include"headers.h"
#include"declaration.h"

Distance test_copy_constructor(Distance &distance)
{
	cout<<"Begin: "<<__func__<<endl;
	distance.count = 5;
	cout<<"End: "<<__func__<<endl;
        return distance;
}

int Distance::referance_test(Distance &a)
{
	cout<<"Begin: "<<__func__<<endl;
	a.count = 3;
	cout<<"End: "<<__func__<<endl;
        return 0;
}

Distance Distance::test_return_class_typecast()
{

	int pk=7;
	float tk=7.0;
	cout<<"Begin: "<<__func__<<endl;

	cout<<"End: "<<__func__<<endl;
        return Distance(pk, tk) ;
}

