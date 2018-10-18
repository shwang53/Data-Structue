#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace std;

using namespace cs225;

/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {
  /** @todo [Part 1] */
  png_ = png;
  start_ = start;
  tolerance_ = tolerance;

  queue_.push(start_);

   height_ = png_.height();
   width_ = png_.width();



  occupied.resize(width_, vector<bool>(height_));

  for(unsigned i = 0; i < width_; i++){
    for(unsigned j = 0; j < height_; j++){
      occupied[i][j] = false; // false.
    }
  }
  occupied[start_x_,start_y_] = true;

}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  ImageTraversal * begin = new BFS(png_, start_, tolerance_);
  return ImageTraversal::Iterator(begin);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
  unsigned int x_ = point.x;
  unsigned int y_ = point.y;

  bool tolerance_check_ = (ImageTraversal::calculateDelta(png_.getPixel(current_.x+1,current_.y), png_.getPixel(start_.x,start_.y)) <= tolerance_) ? true : false;
  if( x_+1 < width_ && (!occupied[x_+1][y_]) && tolerance_check_){
      queue_.push( Point(x_+1, y_));
      occupied[x_+1,y_] = true;
  }

 tolerance_check_ = (ImageTraversal::calculateDelta(png_.getPixel(current_.x,current_.y+1), png_.getPixel(start_.x,start_.y)) <= tolerance_) ? true : false;
  if( y_+1 < height_ && (!occupied[x_][y_+1]) && tolerance_check_){
      queue_.push( Point(x_,y_+1));
      occupied[x_,y_+1] = true;
  }
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
//  return Point(0, 0);
  Point temp = queue_.front();
  queue_.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return queue_.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  return (queue_.empty());
}
