#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"
using namespace std;


/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 *
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) {
  /** @todo [Part 1] */
  png_ = png;
  start_ = start;
  tolerance_ = tolerance;

  //stack_.push(start_);

   height_ = png_.height();
  width_ = png_.width();

  occupied.resize(width_, vector<bool>(height_));

  for(unsigned i = 0; i < width_; i++){
    for(unsigned j = 0; j < height_; j++){
      occupied[i][j] = 0; // false.
    }
  }

}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  ImageTraversal* begin = new DFS(png_,start_,tolerance_);
  return ImageTraversal::Iterator(begin);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */
  unsigned x_ = point.x;
  unsigned y_ = point.y;
  bool tolerance_check_ = (calculateDelta((png_.getPixel(current_.x,current_.y), png_.getPixel(start_.x,start_.y))
                            <= tolerance_) ? true : false;
  if( x_+1 < width_ && tolerance_check_){
      stack_.push(new Point(x_+1, y_));
  }
  if( y_+1 < height_ && tolerance_check_){
      stack_.push(new Point(x_,y_+1));
  }
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point temp = stack_.top();
  stack_.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return stack_.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  if(stack_.empty()){return true;}
  else{return false;}

}
