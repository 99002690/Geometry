#include "function.h"
#include "math.h"

const float pi=22/7;


int triangle_area(float side,float hieght);
int Eqilateral(float side1,float side2,float side3);
int rightangled(float side1,float side2,float side3);
int isosceles(float side1,float side2,float side3);
int scalene(float side1,float side2,float side3);
int triangle_perimeter(float side1,float side2,float side3);

int quadrilateral_perimeter(float side1,float side2,float side3,float side4);
int rectangle_area(float side1,float side2);
int square_area(float side);

int square(float side1,float side2,float side3,float side4,float diagonal1,float diagonal2);
int rhombus_area(float diagonal1,float diagonal2);
int rhombus(float side1,float side2,float side3,float side4);
int quadrilateral_area(float side1,float side2,float side3,float side4,float angle1,float angle2);

int circle_area(float radius);
int circle_circumference(float radius);

int rightcylinder_area(float radius,float hieght);
int rightcylinder_volume(float radius,float height);

int sphere_area(float radius);
int sphere_volume(float radius);


int Rightcircularcone_area(float radius,float height);
int Rightcircularcone_volume(float radius,float height);

int cubeTSA(float side);
int cube_LSA(float side);
int cube_volume(float side);
int cube_diagonal(float side);
int cube_perimeter(float side);

int cuboid_TSA(float length,float breadth,float height);
int cuboid_LSA(float length,float breadth,float height);
int cuboid_volume(float length,float breadth,float height);
int cuboid_diagonal(float length,float breadth,float height);
int cuboid_perimeter(float length,float breadth,float height);

int triangularprism_area(float side,float base,float height);
int triangularprism_volume(float side,float base,float height);


int triangle_area(float side,float hieght)
{
    int area;
    area=(0.5)*side*hieght;
    return area;
}



int Eqilateral(float side1,float side2,float side3)
{
     if((side1==side2)&&(side1==side3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int rightangled(float side1,float side2,float side3)
{   float square1,square2,square3;
    square1=side1*side1;
    square2=side2*side2;
    square3=side3*side3;
    if((square1==square2+square3)||(square2==square1+square3)||(square3==square1+square2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isosceles(float side1,float side2,float side3)
{
    if((side1==side2)||(side2==side3)||(side1==side3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int scalene(float side1,float side2,float side3)
{
    if((side1!=side2)&&(side2!=side3)&&(side1!=side3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int triangle_perimeter(float side1,float side2,float side3)
{
    int perimeter;
    perimeter=side1+side2+side3;
    return perimeter;
}

int quadrilateral_perimeter(float side1,float side2,float side3,float side4)
{
    int perimeter;
    perimeter=side1+side2+side3+side4;
    return perimeter;
}

int rectangle_area(float side1,float side2)
{
    int area;
    area=side1*side2;
    return area;
}

int square_area(float side)
{
    int area;
    area=side*side;
    return area;
}

int square(float side1,float side2,float side3,float side4,float diagonal1,float diagonal2)
{
    if((side1==side2)&&(side2==side3)&&(side3==side4))
    {
        if(diagonal1==diagonal2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

}

int rhombus_area(float diagonal1,float diagonal2)
{
    int area;
    area=(diagonal1*diagonal2)*(0.5);
    return area;
}

int rhombus(float side1,float side2,float side3,float side4)
{
    if((side1==side2)&&(side2==side3)&&(side3==side4))
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int quadrilateral_area(float side1,float side2,float side3,float side4,float radian1,float radian2)
{
    float hieght1,hieght2;
    int area;

    hieght1=sin(radian1);
    hieght2=sin(radian2);
    area=((0.5)*side1*side4*hieght1)+((0.5)*side2*side3*hieght2);
    return area;
}


int circle_area(float radius)
{
    int area;
    area=pi*radius*radius;
    return area;
}

int circle_circumference(float radius)
{
    int circumference;
    circumference=2*pi*radius;
    return circumference;
}

int rightcylinder_area(float radius,float hieght)
{
    int area;
    area=(2*pi*radius*radius)+(2*pi*radius*hieght);
    return area;
}

int rightcylinder_volume(float radius,float height)
{
    int volume;
    volume=pi*radius*radius*height;
    return volume;
}


int sphere_area(float radius)
{
    int area;
    area=4*pi*radius*radius;
    return area;
}

int sphere_volume(float radius)
{
    int volume;
    volume=(4/3)*pi*radius*radius*radius;
    return volume;
}

int Rightcircularcone_area(float radius,float height)
{
    int area;
    area=pi*radius*(radius+sqrt((height*height)+radius*radius));
    return area;
}

int Rightcircularcone_volume(float radius,float height)
{
    int volume;
    volume=(0.3333)*pi*radius*radius*height;
    return volume;
}

int cubeTSA(float side)
{
    int area;
    area=6*side*side;
    return area;
}

int cube_LSA(float side)
{
    int area;
    area=4*side*side;
    return area;
}

int cube_volume(float side)
{
    int volume;
    volume=side*side*side;
    return volume;
}

int cube_diagonal(float side)
{
    int diagonal;
    diagonal=sqrt(3)*side;
    return diagonal;
}

int cube_perimeter(float side)
{
    int perimeter;
    perimeter=12*side;
    return perimeter;
}

int cuboid_TSA(float length,float breadth,float height)
{
    int area;
    area=2*((length*breadth)+(breadth*height)+(length*height));
    return area;
}

int cuboid_LSA(float length,float breadth,float height)
{
    int area;
    area=2*height*(length+breadth);
    return area;
}


int cuboid_volume(float length,float breadth,float height)
{
    int volume;
    volume=length*breadth*height;
    return volume;
}

int cuboid_diagonal(float length,float breadth,float height)
{
    int diagonal;
    diagonal=sqrt((length*length)+(breadth*breadth)+(breadth*breadth));
    return diagonal;
}

int cuboid_perimeter(float length,float breadth,float height)
{
    int perimeter;
    perimeter=4*(length+breadth+height);
    return perimeter;
}

int triangularprism_area(float side,float base,float height)
{
    int area;
    area=(side*base)+(3*base*height);
    return area;
}

int triangularprism_volume(float side,float base,float height)
{
    int volume;
    volume=0.5*base*side*height;
    return volume;
}

int main()
{
    int volme;
    volme=triangularprism_volume(6.5,6.5,6.5);
    printf("%d\n",volme);
    return 0;
}
























