#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
int main( void ) {
	Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    // 1. Point à l'intérieur
    Point inside(5, 5);
    std::cout << "inside (5,5) -> " << (bsp(a, b, c, inside)) << std::endl;

    // 2. Point à l'extérieur
    Point outside(10, 10);
    std::cout << "outside (10,10) -> " << (bsp(a, b, c, outside)) << std::endl;

    // 3. Point sur un bord
    Point onEdge(5, 0);
    std::cout << "onEdge (5,0) -> " << (bsp(a, b, c, onEdge)) << std::endl;

    // 4. Point sur un sommet
    Point onVertex(0, 0);
    std::cout << "onVertex (0,0) -> " << (bsp(a, b, c, onVertex)) << std::endl;

    return 0;
}
