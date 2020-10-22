#include <iostream>

#include "imageio.h"
#include "invert.h"

//Task A
void invert (int arr[MAX_H][MAX_W], int h, int w){
  int a[MAX_H][MAX_W];
  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      a[row][col] = 255-arr[row][col];
    }
  }
  writeImage("taskA.pgm", a, h, w);
}

//Task B
void inverthalf (int arr[MAX_H][MAX_W], int h, int w){
  int b[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if (col >= w/2){
	b[row][col] = 255-arr[row][col];
      }
      else {
	b[row][col] = arr[row][col];
      }
    }
  }
  writeImage("taskB.pgm", b, h, w);
}
