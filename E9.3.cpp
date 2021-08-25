/*******************************************************************************
Lowai Dobie
CSCI-135
E9.3
Simulate a circuit for controlling a hallway light that has switches at both ends of
the hallway. Each switch can be up or down, and the light can be on or off. Toggling
either switch turns the lamp on or off. Provide member functions
5/8/21
*******************************************************************************/
#include <iostream>
using namespace std;
class Circuit{
    private:
    int switch_1;
    int switch_2;
    int lamp;
    
    public:
      Circuit(){
            switch_1=0;
            switch_2=0;
            lamp=0;
      }
    int get_first_switch_state(){    // 0 for down, 1 for up
        return switch_1;
    }

    int get_second_switch_state(){
        return switch_2;
    }
    int get_lamp_state(){           // 0 for off, 1 for on
        return lamp;
    } 
    void toggle_first_switch(){
        if(switch_1==1){
           switch_1=0;
        }
        else{
            switch_1=1;
        }
        if(lamp==1){
           lamp=0; 
        }
        else{
            lamp=1;
        }
    }
    void toggle_second_switch(){
        if(switch_2==1){
           switch_2=0; 
        }
        else{
            switch_2=1;
        }
        if(lamp==1){
           lamp=0;
        }
        else{
            lamp=1;
        }
    }
};

int main(){

    Circuit c;
    
    cout<<"Toggling switch1"<<endl;
    
    c.toggle_first_switch();
    
    cout<<"Switch1: "<<c.get_first_switch_state()<<endl;
    
    cout<<"Switch2: "<<c.get_second_switch_state()<<endl;
    
    cout<<"Lamp: "<<c.get_lamp_state()<<endl;
    
    cout<<"Toggling switch2"<<endl;
    
    c.toggle_second_switch();

    cout<<"Switch1: "<<c.get_first_switch_state()<<endl;
    
    cout<<"Switch2: "<<c.get_second_switch_state()<<endl;
    
    cout<<"Lamp: "<<c.get_lamp_state()<<endl;
    
    
    return 0;

}
