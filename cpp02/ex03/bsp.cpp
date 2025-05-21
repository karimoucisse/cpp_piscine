
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float ax = a.getX().toFloat();
    float ay = a.getY().toFloat();
    float bx = b.getX().toFloat();
    float by = b.getY().toFloat();
    float cx = c.getX().toFloat();
    float cy = c.getY().toFloat();
    float px = point.getX().toFloat();
    float py = point.getY().toFloat();

    // Produit vectoriel AB x AP
    float cross1 = (bx - ax) * (py - ay) - (by - ay) * (px - ax);
    // Produit vectoriel BC x BP
    float cross2 = (cx - bx) * (py - by) - (cy - by) * (px - bx);
    // Produit vectoriel CA x CP
    float cross3 = (ax - cx) * (py - cy) - (ay - cy) * (px - cx);

    // On vérifie si les 3 produits ont le même signe
    bool has_neg = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);
    bool has_pos = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);

    return !(has_neg && has_pos); // vrai si tous positifs ou tous négatifs
}


// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	const float aX = a.getX().toFloat();
// 	const float aY = a.getY().toFloat();
// 	const float bX = b.getX().toFloat();
// 	const float bY = b.getY().toFloat();
// 	const float cX = c.getX().toFloat();
// 	const float cY = c.getY().toFloat();
// 	const float pX = point.getX().toFloat();
// 	const float pY = point.getY().toFloat();

// 	float verifOne = (bX - pX) * (aY - pY) - (bY - pY) * (aX - pX);
// 	float verifTwo = (aX - pX) * (cY - pY) - (aY - pY) * (cX - pX);
// 	float verifThree = (cX - pX) * (bY - pY) - (cY - pY) * (bX - pX);

// 	return (verifOne > 0 && verifTwo > 0 && verifThree > 0) || (verifOne < 0 && verifTwo < 0 && verifThree < 0);

// }
