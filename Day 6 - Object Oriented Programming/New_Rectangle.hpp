// NEW Listing 6.8 - Classes with other Classes as member data
// My modified naming version for not confusing (P.165)

#include <iostream>
class Point         // hold (x,y) coordinates
{
    // no custom constructer -- use default
    public:
        void SetX(int x) {itsX = x;}
        void SetY(int y) {itsY = y;}
        int GetX() const {return itsX;}
        int GetY() const {return itsY;}

    private:
        int itsX;
        int itsY;
};

class Rectangle
{
    public:
        // Custom constructer (WITHOUT inline definition)
        Rectangle(int top, int bot, int right, int left);

        //Custom destructer (WITH inline definition)
        ~Rectangle() {}     

        // Accessor functions
        int GetTop() const {return itsTop;}
        int GetBot() const {return itsBot;}
        int GetLeft() const {return itsLeft;}
        int GetRight() const {return itsRight;}

        Point GetUpperLeft() const  {return PointUpperLeft;}
        Point GetUpperRight() const {return PointUpperRight;}
        Point GetLowerLeft() const  {return PointLowerLeft;}
        Point GetLowerRight() const {return PointLowerRight;}

        void SetUpperLeft(Point Location)  {PointUpperLeft = Location;}
        void SetUpperRight(Point Location) {PointUpperRight = Location;}
        void SetLowerLeft(Point Location)  {PointLowerLeft = Location;}
        void SetLowerRight(Point Location) {PointLowerRight = Location;}

        void SetTop(int top) {itsTop = top;}
        void SetBot(int bot) {itsBot = bot;}
        void SetLeft(int left) {itsLeft = left;}
        void SetRight(int right) {itsRight = right;}

        // Member function (WITHOUT inline definition)
        int GetArea() const;

    private:
        Point PointUpperLeft;     // Create private members of Rectangle class
        Point PointUpperRight;    // which assign objects for  Point class
        Point PointLowerLeft;
        Point PointLowerRight;
        int itsTop;
        int itsBot;
        int itsRight;
        int itsLeft;

};