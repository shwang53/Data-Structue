/* Your code here! */
/* Your code here! */
/**
 * @file dsets.h
 */

#pragma once
#include <vector>
using namespace std;

class DisjointSets
{
	public:
	//	DisjointSets ();
		void addelements (int num);
		int find (int elem);
		void setunion (int a, int b);
		int size (int elem);

	private:
		vector<int> noname;

};
