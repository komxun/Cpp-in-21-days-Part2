// Listing 6.9 - include Rectangle.hpp (P.166)
#include "Rectangle.hpp"

// Definition of custom Constructer for Rectangle class
Rectangle::Rectangle(int top, int bot, int right, int left)
{
    itsTop = top;
    itsBot = bot;
    itsLeft = left;
    itsRight = right;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);

    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);
    
    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bot);

    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bot);
    
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



