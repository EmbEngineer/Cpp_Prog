#include"headers.h"
#include"declaration.h"
int main()
{
    cout<<"Begin: "<<__func__<<endl;
  
    Distance distance_1(5,5), distance_2, distance_3(1,1);
    
    distance_1.get_distance();

    distance_1 + distance_3;

    distance_1.get_distance();

/*
    distance_1 ++; 

    distance_1.get_distance();

    distance_1 + 3;   

    distance_1.get_distance();

    distance_2 =  distance_2.test_return_class_typecast();
   
    Distance distance_1, distance_2, distance_3, distance_4(distance_1), distance_5(12, 16.0);
    
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    
    {

	    Distance d;
    }
    
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    distance_2 =  test_copy_constructor(distance_1);

    cout<<" 1- count "<<distance_1.count<<endl;
    cout<<" 2- count "<<distance_1.count<<endl;

    distance_1.referance_test(distance_3);
    
    cout<<" 3- count "<<distance_3.count<<endl;
    
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    distance_4.get_distance();
    distance_1.set_distance();
    distance_1.get_distance();
    distance_2.set_distance();
    distance_2.get_distance();
    distance_3.add_distance(distance_1 , distance_2);
    distance_3.get_distance();
    distance_5.get_distance();
 */
    cout<<"End: "<<__func__<<endl;
    return 0;   
} 
