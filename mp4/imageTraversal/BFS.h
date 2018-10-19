// /**
//  * @file BFS.h
//  */
//
// #pragma once
//
// #include <iterator>
// #include <cmath>
// #include <list>
// #include <queue>
//
// #include "../cs225/PNG.h"
// #include "../Point.h"
//
// #include "ImageTraversal.h"
//
// using namespace cs225;
// using namespace std;
//
// /**
//  * A breadth-first ImageTraversal.
//  * Derived from base class ImageTraversal
//  */
// class BFS : public ImageTraversal {
// public:
//   BFS(const PNG & png, const Point & start, double tolerance);
//   ~BFS();
//   ImageTraversal::Iterator begin();
//   ImageTraversal::Iterator end();
//
//   void add(const Point & point);
//   Point pop();
//   Point peek() const;
//   bool empty() const;
//
// private:
//   /** @todo [Part 1] */
//   /** add private members here*/
//   PNG png_;
//   //Point start_;
//   double tolerance_;
//   //Point current_;
//   // unsigned height_;
//   // unsigned width_;
//
//
//   //vector<vector<bool>> occupied;
//
//   // int start_x_;
//   // int start_y_;
//
//   queue<Point> queue_;
//
//
// };
/**
 * @file BFS.h
 */

#ifndef BFS_H
#define BFS_H

#include <iterator>
#include <cmath>
#include <list>
#include <queue>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
using namespace std;
using namespace cs225;

/**
 * A breadth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class BFS : public ImageTraversal {
public:
  BFS(const PNG & png, const Point & start, double tolerance);

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek();
  bool empty() const;

private:
  /** @todo [Part 1] */
  /** add private members here*/
	queue<Point> queue;
	Point start_;
	PNG png_;
	double tolerance_;
	vector<vector<bool>> visited;
	int startX;
	int startY;
};

#endif
