#include <iostream>

#include "imageio.h"
#include "add.h"

//Task C
void box (int arr[MAX_H][MAX_W], int h, int w){
  int c[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if (row >= h/4 && row <= (3*h)/4 && col >= w/4 && col <= (3*w)/4){
	c[row][col] = 255;
      }
      else {
	c[row][col] = arr[row][col];
      }
    }
  }
  writeImage("taskC.pgm", c, h, w);
}

//Task D
void frame (int arr[MAX_H][MAX_W], int h, int w){
  int d[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if ((row == h/4 || row == (3*h)/4 || col == w/4 || col == (3*w)/4) && (row >= h/4 && row <= (3*h)/4 && col >= w/4 && col <= (3*w)/4)){
	d[row][col] = 255;
      }
      else {
	d[row][col] = arr[row][col];
      }
    }
  }
  writeImage("taskD.pgm", d, h, w);
}
