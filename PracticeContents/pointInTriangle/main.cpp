#include <iostream>
#include "cmath"
using namespace std;
/**
 * 任意给一个三角形，判断一点是否在三角形内。
 */
/**
 * 1 由三个点确定三角形面积
 * 2 求三个三角形的面积
 * 3 如果三个三角形面积等于原三角行，则在三角形内，否则不在
 *
 */
#define ABS_FLOAT (0.00001)
struct Point{
    float x;
    float y;
};
float getTwoPontDistance(Point& P1,Point& P2)
{
    return sqrt(pow((P1.x-P2.x),2)+pow((P1.y-P2.y),2));

}
float getTriangleArea(Point& A,Point& B,Point& C)
{
    float AB = getTwoPontDistance(A,B);
    float AC = getTwoPontDistance(A,C);
    float BC = getTwoPontDistance(B,C);
    float cos = (pow(AB,2) + pow(AC,2)-pow(BC,2))/(2*AB*AC);
    float sin = sqrt(1-pow(cos,2));
    return 0.5*AB*AC*sin;
}

bool isInTriangle(Point& A,Point& B,Point& C,Point& P)
{
    float s = getTriangleArea( A, B, C);
    float s1 = getTriangleArea( P, A, B);
    float s2 = getTriangleArea( P, B, C);
    float s3 = getTriangleArea( P, A, C);

    return abs(s - (s1 + s2 + s3))<=ABS_FLOAT?true:false;

}

void  test()
{
    cout << "please input Point A:"<<endl;
    Point A;
    cin >> A.x >> A.y;
    cout << "please input Point B:"<<endl;
    Point B;
    cin >> B.x >> B.y;
    cout << "please input Point C:"<<endl;
    Point C;
    cin >> C.x >> C.y;
    cout << "please input Point P:"<<endl;
    Point P;
    cin >> P.x >> P.y;

    bool flag = isInTriangle( A, B, C, P);
    if(flag){cout << "P is in triangle!"<<endl;}
    else{cout <<"P is not in triangle!"<<endl;}
}
int main() {
    test();
    return 0;
}
