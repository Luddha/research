#pragma once
#include <iostream>

class Square{

    private:
        double side;

    public:
        explicit Square( double s = 0.0) : side{s}
        { }

        double getSide() const 
        { return side; }
        double getArea() const
        { return side * side; }
        double getPerimeter( ) const
        { return 4 * side; }

        void print( std::ostream & out = std::cout) const
        { out << "(square " << getSide( ) << ")\n"; }
        bool operator< (const Square & rhs) const
        { return getSide() < rhs.getSide(); }


};

std::ostream & operator<< (std::ostream & out, const Square & rhs){
    rhs.print(out);
    return out;
}