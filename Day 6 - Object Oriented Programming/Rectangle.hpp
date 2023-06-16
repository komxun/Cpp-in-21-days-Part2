// Listing 6.8 - Classes with other Classes as member data
// (P.165)

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

        Point GetUpperLeft() const  {return itsUpperLeft;}
        Point GetUpperRight() const {return itsUpperRight;}
        Point GetLowerLeft() const  {return itsLowerLeft;}
        Point GetLowerRight() const {return itsLowerRight;}

        void SetUpperLeft(Point Location)  {itsUpperLeft = Location;}
        void SetUpperRight(Point Location) {itsUpperRight = Location;}
        void SetLowerLeft(Point Location)  {itsLowerLeft = Location;}
        void SetLowerRight(Point Location) {itsLowerRight = Location;}

        void SetTop(int top) {itsTop = top;}
        void SetBot(int bot) {itsBot = bot;}
        void SetLeft(int left) {itsLeft = left;}
        void SetRight(int right) {itsRight = right;}

        // Member function (WITHOUT inline definition)
        int GetArea() const;

    private:
        Point itsUpperLeft;     // Create private members of Rectangle class
        Point itsUpperRight;    // which assign objects for  Point class
        Point itsLowerLeft;
        Point itsLowerRight;
        int itsTop;
        int itsBot;
        int itsRight;
        int itsLeft;

};