/*
* Class for Point.
* Each Point has x value and y value.
*/

#include <sstream>
#include <string>
#include <cstdlib>
#include "Point.h"
//Constructors.
Point::Point(int x, int y): x(x), y(y) {}
Point::Point() {
  this->x = 0;
  this->y = 0;
}
Point::Point(const Point &p) {
  this->x = p.x;
  this->y = p.y;
}
Point::Point(string PointAsString) {
  this->x = 0;
  this->y = 0;
  for(int i = 0; i < PointAsString.size(); i++) {
    if (PointAsString[i] > 47 && PointAsString[i] < 57) {
      if (x ==0) {
      this->x = (int) PointAsString[i];
    } else {
        this->y = (int) PointAsString[i];
      }
    }
  }
}
//Getters.
int Point::getX() const { return this->x; }
int Point::getY() const { return this->y; }
//Setter.
void Point::setPoint(int x, int y) {
  this->x = x;
  this->y = y;
}
//Operators.
bool Point::operator<(const Point &p) const {
  if (this->getX() == p.getX()) {
    return this->getY() < p.getY();
  }
  return this->getX() < p.getX();
}
//out operator for printing.
ostream& operator <<(ostream &out, const Point &p) {
  out << "(" << p.x << "," << p.y << ")";
}
//equals operator.
bool Point::operator==(const Point &p) const {
  return (this->x == p.x && this->y == p.y);
}
//assign operator.
Point& Point::operator=(const Point &p) {
  this->x = p.x;
  this->y = p.y;
}
string& Point::toString() {
  ostringstream ss;
  ss.clear();
  ss << this;
  string s = ss.str();
  return s;
}