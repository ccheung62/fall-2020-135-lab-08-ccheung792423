#include <iostream>

#include "imageio.h"
#include "add.h"

//Task C
void box (int arr[MAX_H][MAX_W], int h, int w){
  int c[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if (row >= h/4 && row <= (3*h)/4 && col >= w/4 && col <= (3*w)/4){ // change the pixel into white if the pixiel is inside a box centered in the middle
	c[row][col] = 255;
      }
      else { //copy the image as normal
	c[row][col] = arr[row][col];
      }
    }
  }
  writeImage("taskC.pgm", c, h, w); //produce the image as taskC.pgm
}

//Task D
void frame (int arr[MAX_H][MAX_W], int h, int w){
  int d[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if ((row == h/4 || row == (3*h)/4 || col == w/4 || col == (3*w)/4) && (row >= h/4 && row <= (3*h)/4 && col >= w/4 && col <= (3*w)/4)){  // ensures that the frame only applies within the middle without extending out of the one pixel box
	d[row][col] = 255;
      }
      else {
	d[row][col] = arr[row][col]; //copy the image as normal
      }
    }
  }
  writeImage("taskD.pgm", d, h, w); //produce the image as taskD.pgm
}
