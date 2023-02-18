class Distance
{
     private:
             float feet;
             int inch;
     public:
             int count ;
	     Distance();
             ~Distance();
	     Distance(int inch, float feet);
//             Distance(Distance &);
             int get_distance();
             int set_distance();  
             int add_distance(Distance &, Distance );
             int referance_test(Distance &);
      	     void operator ++(int );
	     void  operator + ( int);
	     void  operator +( Distance pk);
             Distance test_return_class_typecast();
};   

Distance test_copy_constructor(Distance &);
