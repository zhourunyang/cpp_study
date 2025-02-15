//Point.h
#ifndef _POINT_H
#define _POINT_H

class Point {  //类的定义
    public:
        Point();
        Point(int x, int y);
        ~Point();
        void move(int newX, int newY);
        int getX() const {return x;}
        int getY() const {return y;}
        //static void showCount();
    private:
        int x, y;
};
#endif //_POINT_H