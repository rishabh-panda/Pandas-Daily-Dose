#include<iostream>
#include<math.h>
using namespace std;

//calculating area of square
int area_square(int s)
{
    return pow(s,2);
}

//calculating area of triangle
int area_triangle(int base, int height)
{
    return (0.5*base*height);
}

//calculation using Heron's formula
int area_Heron(float a, float b, float c)
{
    float s = (a+b+c)*0.5;
    return sqrt((s*(s-a)*(s-b)*(s-c)));
}

int main() {
cout<<"\n\nArea of square: "<<area_square(5);
cout<<"\n\nArea of triangle: "<<area_triangle(2,10);
cout<<"\n\nHeron's Area: "<<area_Heron(2,4,5);
return 0;
}