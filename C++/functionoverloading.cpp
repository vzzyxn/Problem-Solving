#include<iostream> 
using namespace std;
void volume(int a)

    // volume of cube = a(3)
{
    int vol;
    vol = a * a * a;
    cout <<"Volume of cube ="<<vol;
}
void volume(float r,float h)
    // volume of cylinder = pi*r*r
{
    float vol;
    vol = 3.14*r*r*h;
    cout <<"Volume of a cylinder ="<<vol;
}
void volume(int l,int w,int h)
{
    int vol;
    vol = l*w*h;
    cout <<"Volume of rectangular prism ="<<vol;
    // volume of rectangular prism = l*w*h
}
int main()
{
    int cube; 
    int length,width,r_height;
    float radius,height;
    cout <<"Enter sides of cube=\n";
    cin >> cube;
    volume(cube);
    
    cout <<"\nEnter radius and height of cylinder=";
    cin >> radius >> height;
    volume(radius,height);

    cout <<"\nEnter length, width, height of rectangular prism=";
    cin >> length >> r_height >> width;
    volume(length,r_height,width);
}
