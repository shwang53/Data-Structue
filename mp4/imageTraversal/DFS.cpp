// #include <iterator>
// #include <cmath>
//
// #include <list>
// #include <queue>
// #include <stack>
// #include <vector>
//
// #include "../cs225/PNG.h"
// #include "../Point.h"
//
// #include "ImageTraversal.h"
// #include "DFS.h"
// using namespace std;
//
//
// /**
//  * Initializes a depth-first ImageTraversal on a given `png` image,
//  * starting at `start`, and with a given `tolerance`.
//  *
//  * @param png The image this DFS is going to traverse
//  * @param start The start point of this DFS
//  * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
//  * it will not be included in this DFS
//  */
// DFS::DFS(const PNG & png, const Point & start, double tolerance) {
//   /** @todo [Part 1] */
//   png_ = png;
//   start_ = start;
//   tolerance_ = tolerance;
//
//   stack_.push(start_);
//
//   // height_ = png_.height();
// //  width_ = png_.width();
//
// //  occupied.resize(width_, vector<bool>(height_));
// occupied = new int* [png_.width()];
//
//   for(unsigned i = 0; i < png_.width(); i++){
//     occupied[i] = new int [png_.height()];
//     for(unsigned j = 0; j < png_.height(); j++){
//       occupied[i][j] = 0; // false.
//     }
//   }
//
// }
//
// /**
//  * Returns an iterator for the traversal starting at the first point.
//  */
// ImageTraversal::Iterator DFS::begin() {
//   /** @todo [Part 1] */
//   ImageTraversal* begin = new DFS(png_,start_,tolerance_);
//   return ImageTraversal::Iterator(begin);
// }
//
// /**
//  * Returns an iterator for the traversal one past the end of the traversal.
//  */
// ImageTraversal::Iterator DFS::end() {
//   /** @todo [Part 1] */
//   return ImageTraversal::Iterator();
// }
//
// /**
//  * Adds a Point for the traversal to visit at some point in the future.
//  */
// void DFS::add(const Point & point) {
//   /** @todo [Part 1] */
//   // unsigned x_ = point.x;
//   // unsigned y_ = point.y;
//   // bool tolerance_check_ = (calculateDelta(png_.getPixel(current_.x,current_.y), png_.getPixel(start_.x,start_.y)) <= tolerance_) ? true : false;
//   // if( x_+1 < width_ && occupied[x_+1][y_] ==0 && tolerance_check_){
//   //   //  stack_.push(new Point(x_+1, y_));
//   //   Point right (x_+1, y_);
//   // }
//   // if( y_+1 < height_ && occupied[x_][y_+1] ==0 && tolerance_check_){
//   //   //  stack_.push(new Point(x_,y_+1));
//   //   Point up(x_,y_+1);
//   // }
//   // unsigned int x_ = point.x;
//   // unsigned int y_ = point.y;
//   //
//   // double toler = calculateDelta(png_.getPixel(current_.x+1,current_.y), png_.getPixel(start_.x,start_.y));
//   // bool tolerance_check_ =  toler < tolerance_ ? true : false;
//   //
//   // if( x_+1 < width_ && (occupied[x_+1][y_]==0) && tolerance_check_){
//   //     // queue_.push( Point(x_+1, y_));
//   //     // occupied[x_+1,y_] = 1;
//   //     Point right(x_+1, y_);
//   //     stack_.push(right);
//   // //    occupied[x_+1][y_]=1;
//   // }
//   //
//   //  toler = calculateDelta(png_.getPixel(current_.x,current_.y+1), png_.getPixel(start_.x,start_.y));
//   //  tolerance_check_ =  toler < tolerance_ ? true : false;
//   // if( y_+1 < height_ && (occupied[x_][y_+1]==0) && tolerance_check_){
//   //     // queue_.push( Point(x_,y_+1));
//   //     // occupied[x_,y_+1] = 1;
//   //     Point down(x_,y_+1);
//   //     stack_.push(down);
//   // //    occupied[x_][y_+1]=1;
//   // }
//   //
//   // toler = calculateDelta(png_.getPixel(current_.x-1,current_.y), png_.getPixel(start_.x,start_.y));
//   // tolerance_check_ =  toler < tolerance_ ? true : false;
//   //  if( x_ > 0 && x_+1 <= width_ && (occupied[x_-1][y_]==0) && tolerance_check_){
//   //      // queue_.push( Point(x_,y_+1));
//   //      // occupied[x_,y_+1] = 1;
//   //      Point left(x_-1,y_);
//   //      stack_.push(left);
//   // //     occupied[x_-1][y_]=1;
//   //  }
//   //
//   //  toler = calculateDelta(png_.getPixel(current_.x,current_.y-1), png_.getPixel(start_.x,start_.y));
//   //  tolerance_check_ =  toler < tolerance_ ? true : false;
//   //   if( y_ > 0 && y_+1 <= height_ && (occupied[x_][y_-1]==0) && tolerance_check_){
//   //       // queue_.push( Point(x_,y_+1));
//   //       // occupied[x_,y_+1] = 1;
//   //       Point up(x_,y_-1);
//   //       stack_.push(up);
//   //   //    occupied[x_][y_-1]=1;
//   //   }
//
//   HSLAPixel origin = png_.getPixel(start_.x, start_.y);
// if(point.x < (png_.width()-1)){
//  double real_tolr = calculateDelta(png_.getPixel(point.x+1, point.y), origin);
//  if(real_tolr < tolerance_ && occupied[point.x+1][point.y] == 0){
//    Point right(point.x+1, point.y);
//    stack_.push(right);
// //      occupied[point.x+1][point.y]=1;
//  }
// }
// if(point.y < (png_.height() -1)){
//  double real_told = calculateDelta(png_.getPixel(point.x, point.y+1), origin);
//  if(real_told< tolerance_ && occupied[point.x][point.y+1] == 0){
//    Point down(point.x, point.y+1);
//    stack_.push(down);
// //      occupied[point.x][point.y+1]=1;
//  }
// }
// if(point.x > 0 && point.x <= (png_.width()-1) ){
//  double real_toll = calculateDelta(png_.getPixel(point.x-1, point.y), origin);
//  if(real_toll < tolerance_ && occupied[point.x-1][point.y] == 0){
//    Point left(point.x-1, point.y);
//    stack_.push(left);
// //      occupied[point.x-1][point.y]=1;
//  }
// }
// if(point.y > 0 && point.y <= (png_.height() -1)){
//  double real_tolu = calculateDelta(png_.getPixel(point.x, point.y-1), origin);
//  if(real_tolu < tolerance_ && occupied[point.x][point.y-1] == 0){
//    Point up(point.x, point.y -1);
//    stack_.push(up);
// //      occupied[point.x][point.y-1]=1;
//  }
// }
// }
//
// /**
//  * Removes and returns the current Point in the traversal.
//  */
// Point DFS::pop() {
//   /** @todo [Part 1] */
//   Point temp = stack_.top();
//   stack_.pop();
//   return temp;
// }
//
// /**
//  * Returns the current Point in the traversal.
//  */
// Point DFS::peek() const {
//   /** @todo [Part 1] */
//   return stack_.top();
// }
//
// /**
//  * Returns true if the traversal is empty.
//  */
// bool DFS::empty() const {
//   /** @todo [Part 1] */
//   if(stack_.empty()){return true;}
//   else{return false;}
//
// }
//
// DFS::~DFS(){
//   for(unsigned i=0; i<png_.width(); i++){
//     delete occupied[i];
//   }
//   delete occupied;
// }
