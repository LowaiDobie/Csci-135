/*******************************************************************************
Lowai Dobie
CSCI-135
E9.5
Implement a class Rectangle. Provide a constructor to construct a rectangle with a
given width and height, member functions get_perimeter and get_area that compute
the perimeter and area, and a member function void resize(double factor) that resizes
the rectangle by multiplying the width and height by the given factor.
5/8/21
*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
class Rectangle{
    private:
    double width;
    double height;
    public:
    Rectangle(double w, double h){
        
        width=w;
        height=h; 
    }
    double get_perimeter(){
    
    return 2*(width+height);
    
    }
    double get_area(){
    
    return (width*height);
   
    }
    void resize(double factor){
   
    width=width*factor;
    height=height*factor;
   
    }
};

int main(){
    
    Rectangle r(5, 10);
    cout << "Perimeter is:" << r.get_perimeter () << endl;
    cout << "Area is: " << r.get_area () << endl;
    r.resize (3);
    cout<<"Perimeter after resizing: "<<r.get_perimeter()<<endl;
    cout<<"Area after resizing: "<<r.get_area()<<endl;

    return 0;
}
    

