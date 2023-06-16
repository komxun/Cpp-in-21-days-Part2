// NEW Listing 6.9 - include Rectangle.hpp (P.166)
#include "NEW_Rectangle.hpp"

// Definition of custom Constructer for Rectangle class
Rectangle::Rectangle(int top, int bot, int right, int left)
{
    itsTop = top;
    itsBot = bot;
    itsLeft = left;
    itsRight = right;

    PointUpperLeft.SetX(left);
    PointUpperLeft.SetY(top);

    PointUpperRight.SetX(right);
    PointUpperRight.SetY(top);
    
    PointLowerLeft.SetX(left);
    PointLowerLeft.SetY(bot);

    PointLowerRight.SetX(right);
    PointLowerRight.SetY(bot);
    
}

// Definition of GetArea() member function of Rectangle class
int Rectangle::GetArea() const
{
    int Width = itsRight - itsLeft;
    int Hegiht = itsTop - itsBot;
    return (Width * Hegiht);
}

// --------------------Main Program----------------------
int main()
{
    //initialize a local Rectangle variable
    Rectangle MyRectangle(100, 50, 80, 20);

    int Area = MyRectangle.GetArea();

    std::cout << "Area = " << Area << std::endl;
    std::cout << "Upper Left X coordinate = ";
    std::cout << MyRectangle.GetUpperLeft().GetX();

                // MyRectangle.GetUpperLeft() ---> Point class

    return 0;
}



