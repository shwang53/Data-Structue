// /**
//  * @file DFS.h
//  */
//
// #pragma once
//
// #include <iterator>
// #include <cmath>
// #include <list>
// #include <stack>
//
// #include "../cs225/PNG.h"
// #include "../Point.h"
//
// #include "ImageTraversal.h"
//
// using namespace cs225;
//
// /**
//  * A depth-first ImageTraversal.
//  * Derived from base class ImageTraversal
//  */
// class DFS : public ImageTraversal {
// public:
//   DFS(const PNG & png, const Point & start, double tolerance);
//   ~DFS();
//
//   ImageTraversal::Iterator begin();
//   ImageTraversal::Iterator end();
//
//   void add(const Point & point);
//   Point pop();
//   Point peek() const;
//   bool empty() const;
//
// private:
// 	/** @todo [Part 1] */
// 	/** add private members here*/
//
//   PNG png_;
//   //Point start_;
//   double tolerance_;
// //  unsigned height_;
// //  unsigned width_;
//
// //  Point current_;
//
//
//   std::stack<Point> stack_;
//   //std::vector<std::vector<bool>> occupied;
//
//
// };
/**
 * @file DFS.h
 */

#ifndef DFS_H
#define DFS_H

#include <iterator>
#include <cmath>
#include <list>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
using namespace std;
using namespace cs225;

/**
 * A depth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class DFS : public ImageTraversal {
public:
  DFS(const PNG & png, const Point & start, double tolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() ;
  bool empty() const;


private:
	/** @todo [Part 1] */
	/** add private members here*/
	stack<Point> stack;
	Point start_;
	PNG png_;
	double tolerance_;
	vector<vector<bool>> visited;
	int startX;
	int startY;
};

#endif
