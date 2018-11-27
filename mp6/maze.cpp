
/* Your code here! */
#include "maze.h"

using namespace std;

SquareMaze::SquareMaze() {

}


void SquareMaze::makeMaze(int width, int height) {

  this->width = width;
  this->height = height;
  size = width * height;


  for (int i = 0; i < size; i++) {
    right.push_back(1);
    down.push_back(1);
  }

  DisjointSets djs = DisjointSets();
  djs.addelements(size);


  int count = 0;
  while (count + 1 < size ) {
    int rX = rand() % width;
    int rY = rand() % height;
    int rZ = rY * width;

    int dir = rand() % 2;

    int idx = rX + rZ;
    int temp = djs.find(idx);


    if (dir == 0) {
      if(rY + 1 < height && down[idx]){
        if(temp == djs.find(rX + (rY + 1) * width)){
          continue;
        }
        else {
            down[idx] = 0;
            djs.setunion(temp, djs.find(rX + (1 + rY) * width));
            count++;
          }
      }

    }
    else {
      if(rX + 1 < width  && right[idx] ){
        if (temp == djs.find(idx + 1)){
          continue;
        }
        else{
            right[idx] = 0;
            djs.setunion(temp, djs.find(idx + 1));
            count++;
          }
      }
    }
  }

}


    bool SquareMaze::canTravel(int x, int y, int dir) const {

      int temp = y * width + x;

      switch(dir){
        case 0: if(right[temp])return false ;
                else return true;

        case 1: if(down[temp])return false ;
                else return true;

        case 2: if (x == 0) return false;
                else return !(right[temp -1]);

        case 3: if (y == 0) return false;
                else return !(down[x + (y - 1) * width]);
      }

      return false;
    }

    void SquareMaze::setWall(int x, int y, int dir, bool exists) {
      // if (x < 0 || x >= width || y < 0 || y >= height ) return;
      if (dir == 1) {
        down[y * width + x] = exists;

      } else if (dir == 0) {
        right[y * width + x] = exists;
      }
    }


  vector<int> SquareMaze::solveMaze() {

      vector<int> optimalPath;

        queue<int> q;
        q.push(0);


        map<int, int> my_map;
        my_map.insert(std::pair<int,int>(0, 0));

        map<int, int> backtrack;
        int count = 0;

        while (!q.empty()){
            int temp = q.front();
            q.pop();
            int x = temp % width;
            int y = temp / width;

            for (int dir = 0; dir < 4; dir++){
            	  int tempo;
                switch(dir){
                  case 0: tempo = (y * width) + (x+1); break;
                  case 1: tempo = ((y+1) * width) + x; break;
                  case 2: tempo = (y * width) + (x-1); break;
                  case 3: tempo = ((y-1) * width) + x; break;
                }

              	if (canTravel(x,y,dir) && my_map.find(tempo) == my_map.end()){
              		q.push(tempo);
                  backtrack[tempo] = temp;
              		my_map.insert(pair<int, int>(tempo, my_map[temp]+1));

            	   }
            }

      	}
      	unsigned max = 0;
      	int bd = 0;

      	for(int x = 0; x < width ; x++){

        		int dest = ( (height-1) * width) + x;
        		vector<int> path;


        		while(dest != 0){


        			if(dest == backtrack[dest] + 1){
        				path.push_back(0);
        			}


        			if(dest == backtrack[dest] -1){
        				path.push_back(2);
        			}


        			if(dest == width + backtrack[dest]){
        				path.push_back(1);
        			}
              //

        			if(dest == backtrack[dest]-width){
        				path.push_back(3);
        			}

        			dest = backtrack[dest];
        		}

        		if(max < path.size()){
        			max = path.size();
        			optimalPath = path;
        			bd = dest;
        		}
      	}

        //Reverse the vector path
        reverse(optimalPath.begin(), optimalPath.end());
        return optimalPath;
}




    PNG * SquareMaze::drawMaze() const {

      PNG* raw = new PNG(width*10 + 1, height*10 + 1);

      for (int i = 0; i < height*10 + 1; i++) {
        HSLAPixel& p = raw->getPixel(0, i);
        p.l = 0;
      }

      for (int i = 10; i < width*10 + 1; i++) {
        HSLAPixel& p = raw->getPixel(i, 0);
        p.l = 0;
      }

      for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {


          if (right[y * width + x]) {
            for (int i = 0; i <= 10; i++) {
              HSLAPixel& p = raw->getPixel(10 * x + 10, 10 * y + i);
              p.l = 0;
            }
          }


          if (down[y * width + x]) {
            for (int i = 0; i <= 10; i++) {
              HSLAPixel& p = raw->getPixel(10 * x + i, 10 * y + 10);
              p.l = 0;
            }
          }


        }
      }
      return raw;
    }


    PNG * SquareMaze::drawMazeWithSolution() {

      PNG * final = drawMaze();

    	vector<int> optimalPath;
      optimalPath = solveMaze();

    	int x = 5 , y = 5;

    	for (int dir : optimalPath){
          for (int k = 1; k <= 10; k++){//color 11 pixels in a line

      			HSLAPixel& p = final->getPixel(x,y);
      			p.h = 0;
      			p.s = 1;
      			p.l = 0.5;
      			p.a = 1;

            switch(dir){
              case 0: x++; break;
              case 1: y++; break;
              case 2: x--; break;
              case 3: y--; break;
            }

    		  }

      		HSLAPixel& p = final->getPixel(x,y);
      		p.h = 0;
      		p.s = 1;
      		p.l = 0.5;
      		p.a = 1;

    	}

  	for(int i =1; i < 10; i++){
  		HSLAPixel& p = final->getPixel(x-5+i, y+5);
  		p.l = 1;

  	}

    return final;

}
