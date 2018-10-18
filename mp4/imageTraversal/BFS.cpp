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
// #include "BFS.h"
//
// using namespace std;
//
// using namespace cs225;
//
// /**
//  * Initializes a breadth-first ImageTraversal on a given `png` image,
//  * starting at `start`, and with a given `tolerance`.
//  * @param png The image this BFS is going to traverse
//  * @param start The start point of this BFS
//  * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
//  * it will not be included in this BFS
//  */
// BFS::BFS(const PNG & png, const Point & start, double tolerance)
// //  : png_(png), start_(start), tolerance_(tolerance)
//  {
//   /** @todo [Part 1] */
//   png_ = png;
//   start_ = start;
//   tolerance_ = tolerance;
//
//   queue_.push(start_);
//
//    //height_ = png_.height();
//    //width_ = png_.width();
//
//    occupied = new int*[png.width()];
//
//
// //  occupied.resize(width_, vector<bool>(height_));
//
//   for(unsigned i = 0; i < png_.width(); i++){
//     occupied[i] = new int [png_.height()];
//     for(unsigned j = 0; j < png_.height(); j++){
//       occupied[i][j] = 0; // false.
//     }
//   }
// //  occupied[start_x_,start_y_] = true;
//
// }
//
// /**
//  * Returns an iterator for the traversal starting at the first point.
//  */
// ImageTraversal::Iterator BFS::begin() {
//   /** @todo [Part 1] */
//   ImageTraversal * begin = new BFS(png_, start_, tolerance_);
//   return ImageTraversal::Iterator(begin);
// }
//
// /**
//  * Returns an iterator for the traversal one past the end of the traversal.
//  */
// ImageTraversal::Iterator BFS::end() {
//   /** @todo [Part 1] */
//   return ImageTraversal::Iterator();
// }
//
// /**
//  * Adds a Point for the traversal to visit at some point in the future.
//  */
// void BFS::add(const Point & point) {
//   /** @todo [Part 1] */
//   // unsigned int x_ = point.x;
//   // unsigned int y_ = point.y;
//   // double toler = calculateDelta(png_.getPixel(current_.x+1,current_.y), png_.getPixel(start_.x,start_.y));
//   // bool tolerance_check_ =  toler < tolerance_ ? true : false;
//   //
//   // if( x_+1 < width_ && (occupied[x_+1][y_]==0) && tolerance_check_){
//   //     // queue_.push( Point(x_+1, y_));
//   //     // occupied[x_+1,y_] = 1;
//   //     Point right(x_+1, y_);
//   //     queue_.push(right);
//   // //    occupied[x_+1][y_]=1;
//   // }
//   //
//   // toler = calculateDelta(png_.getPixel(current_.x,current_.y+1), png_.getPixel(start_.x,start_.y));
//   // tolerance_check_ =  toler < tolerance_ ? true : false;
//   //  if( y_+1 < height_ && (occupied[x_][y_+1]==0) && tolerance_check_){
//   //     // queue_.push( Point(x_,y_+1));
//   //     // occupied[x_,y_+1] = 1;
//   //     Point down(x_,y_+1);
//   //     queue_.push(down);
//   // //    occupied[x_][y_+1]=1;
//   // }
//   //
//   // toler = calculateDelta(png_.getPixel(current_.x-1,current_.y), png_.getPixel(start_.x,start_.y));
//   // tolerance_check_ =  toler < tolerance_ ? true : false;
//   //  if( x_ > 0 && x_+1 <= width_ && (occupied[x_-1][y_]==0) && tolerance_check_){
//   //      // queue_.push( Point(x_,y_+1));
//   //      // occupied[x_,y_+1] = 1;
//   //      Point left(x_-1,y_);
//   //      queue_.push(left);
//   //   //   occupied[x_-1][y_]=1;
//   //  }
//   //  toler = calculateDelta(png_.getPixel(current_.x,current_.y-1), png_.getPixel(start_.x,start_.y));
//   //  tolerance_check_ =  toler < tolerance_ ? true : false;
//   //   if( y_ > 0 && y_+1 <= height_ && (occupied[x_][y_-1]==0) && tolerance_check_){
//   //       // queue_.push( Point(x_,y_+1));
//   //       // occupied[x_,y_+1] = 1;
//   //       Point up(x_,y_-1);
//   //       queue_.push(up);
//   // //      occupied[x_][y_+1]=1;
//   //   }
//
// if(point.x < (png_.width()-1)){
//  double cur_tolerance_ = calculateDelta(png_.getPixel(point.x+1, point.y), png_.getPixel(start_.x, start_.y));
//
//  if(cur_tolerance_ < tolerance_ && occupied[point.x+1][point.y] == 0){
//    Point east(point.x+1, point.y);
//    queue_.push(east);
//   //    occupied[point.x+1][point.y]=1;
//  }
// }
//
// if(point.y < (png_.height() -1)){
//  double cur_tolerance_ = calculateDelta(png_.getPixel(point.x, point.y+1), png_.getPixel(start_.x, start_.y));
//
//  if(cur_tolerance_< tolerance_ && occupied[point.x][point.y+1] == 0){
//    Point south(point.x, point.y+1);
//    queue_.push(south);
//   //    occupied[point.x][point.y+1]=1;
//  }
// }
//
// if(point.x > 0 && point.x <= (png_.width()-1) ){
//  double cur_tolerance_ = calculateDelta(png_.getPixel(point.x-1, point.y), png_.getPixel(start_.x, start_.y));
//
//  if(cur_tolerance_ < tolerance_ && occupied[point.x-1][point.y] == 0){
//    Point west(point.x-1, point.y);
//    queue_.push(west);
//   //    occupied[point.x-1][point.y]=1;
//  }
// }
//
// if(point.y > 0 && point.y <= (png_.height() -1)){
//  double cur_tolerance_ = calculateDelta(png_.getPixel(point.x, point.y-1), png_.getPixel(start_.x, start_.y));
//
//  if(cur_tolerance_ < tolerance_ && occupied[point.x][point.y-1] == 0){
//    Point north(point.x, point.y -1);
//    queue_.push(north);
// //   occupied[point.x][point.y-1]=1;
//
//  }
// }
//
// }
//
// /**
//  * Removes and returns the current Point in the traversal.
//  */
// Point BFS::pop() {
//   /** @todo [Part 1] */
// //  return Point(0, 0);
//   Point temp = queue_.front();
//   queue_.pop();
//   return temp;
// }
//
// /**
//  * Returns the current Point in the traversal.
//  */
// Point BFS::peek() const {
//   /** @todo [Part 1] */
//   if(!empty()){
//       return queue_.front();
//   }else{
//     return Point(0,0);
//   }
//
// }
//
// /**
//  * Returns true if the traversal is empty.
//  */
// bool BFS::empty() const {
//   /** @todo [Part 1] */
//   if(queue_.empty()){
//     return true;
//   }else{
//     return false;
//   }
//   //return (queue_.empty());
// }
//
// BFS::~BFS(){
//   for(unsigned i=0; i<png_.width(); i++){
//     delete occupied[i];
//   }
//   delete occupied;
// }
