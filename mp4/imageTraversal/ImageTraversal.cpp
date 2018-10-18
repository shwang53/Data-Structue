// #include <cmath>
// #include <iterator>
// #include <iostream>
//
// #include "../cs225/HSLAPixel.h"
// #include "../cs225/PNG.h"
// #include "../Point.h"
//
// #include "ImageTraversal.h"
//
// /**
//  * Calculates a metric for the difference between two pixels, used to
//  * calculate if a pixel is within a tolerance.
//  *
//  * @param p1 First pixel
//  * @param p2 Second pixel
//  * @return the difference between two HSLAPixels
//  */
// double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
//   double h = fabs(p1.h - p2.h);
//   double s = p1.s - p2.s;
//   double l = p1.l - p2.l;
//
//   // Handle the case where we found the bigger angle between two hues:
//   if (h > 180) { h = 360 - h; }
//   h /= 360;
//
//   return sqrt( (h*h) + (s*s) + (l*l) );
// }
//
// /**
//  * Default iterator constructor.
//  */
// ImageTraversal::Iterator::Iterator() {
//   /** @todo [Part 1] */
//     temp = NULL;
// }
//
// ImageTraversal::Iterator::Iterator(ImageTraversal* tempo) {
//   /** @todo [Part 1] */
//     temp = tempo;
//     curr = temp->start_;
// }
//
// /**
//  * Iterator increment opreator.
//  *
//  * Advances the traversal of the image.
//  */
// ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
//   /** @todo [Part 1] */
//   // if(!temp -> empty()){
//   //     curr = temp->pop();
//   //     temp -> add(curr);
//   //     curr = temp->peek();
//   // }
//   if(!temp->empty()){
//     curr = temp->pop();
//     temp->occupied[curr.x][curr.y] = 1;
//     while(!temp->empty() && temp->occupied[temp->peek().x][temp->peek().y] == 1)
//       Point junk = temp->pop();
//     temp->add(curr);
//
//     if(temp->empty())
//       temp = NULL;
//     else
//       curr = temp->peek();
//     }
//   return *this;
//   //return *this;
// }
//
// /**
//  * Iterator accessor opreator.
//  *
//  * Accesses the current Point in the ImageTraversal.
//  */
// Point ImageTraversal::Iterator::operator*() {
//   /** @todo [Part 1] */
//   return temp -> peek();
//   //return curr;
// }
//
// /**
//  * Iterator inequality operator.
//  *
//  * Determines if two iterators are not equal.
//  */
// bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
//   /** @todo [Part 1] */
//   bool compare1 = (temp == nullptr) ? true : false;
//   bool compare2 = (other.temp == nullptr) ? true : false;
//
//   compare1 = (compare1 == true) ? compare1 : temp->empty();
//   compare2 = (compare2 == true) ? compare2 : other.temp->empty();
//
//   if(compare1 && compare2){return false;}
//   else if( !compare1 && !compare2){return temp != other.temp;}
//   else {return true;}
//
//   // bool thisEmpty = false;
//   // bool otherEmpty = false;
//   //
//   // if (temp == NULL) { thisEmpty = true; }
//   // if (other.temp == NULL) { otherEmpty = true; }
//   //
//   // if (!thisEmpty)  { thisEmpty = temp->empty(); }
//   // if (!otherEmpty) { otherEmpty = other.temp->empty(); }
//   //
//   // if (thisEmpty && otherEmpty) return false; // both empty then the traversals are equal, return true
//   // else if ((!thisEmpty)&&(!otherEmpty)) return (temp != other.temp); //both not empty then compare the traversals
//   // else return true; // one is empty while the other is not, return true
//
// }
#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  traversal = NULL;
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  if (!traversal->empty()) {
        current = traversal->pop();
        traversal->add(current);
        current = traversal->peek();
      }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  bool thisEmpty = false;
  bool otherEmpty = false;

      if (traversal == NULL) { thisEmpty = true; }
      if (other.traversal == NULL) { otherEmpty = true; }

      if (!thisEmpty)  { thisEmpty = traversal->empty(); }
      if (!otherEmpty) { otherEmpty = other.traversal->empty(); }

      if (thisEmpty && otherEmpty) return false; // both empty then the traversals are equal, return true
      else if ((!thisEmpty)&&(!otherEmpty)) return (traversal != other.traversal); //both not empty then compare the traversals
      else return true; // one is empty while the other is not, return true

}
