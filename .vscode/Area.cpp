#include <iostream>
using namespace std;
class Area{
    public:
    Area(int l, int b, int h){
        cout << "Area of the cuboid = " << 2*(l*b+b*h+h*l) << endl;
    }
    Area(int a){
        cout << "Area of the cube = " << 6*a*a << endl;
    }
};
class Volume{
    public:
    Volume(int l, int b, int h){
        cout << "Volume of the cuboid = "<< l*b*h << endl;
     }
    Volume(int a){
        cout << "Volume of the cube = "<< a*a*a << endl;
    }
};
int main(){
    Area(4);
    Area(5, 4, 3);
    Volume(4);
    Volume(5, 4, 3);
    return 0;
}