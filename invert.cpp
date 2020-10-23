#include <iostream>

#include "imageio.h"
#include "invert.h"

//Task A
void invert (int arr[MAX_H][MAX_W], int h, int w){
  int a[MAX_H][MAX_W];
  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      a[row][col] = 255-arr[row][col];  //inverts the color for each pixel
    }
  }
  writeImage("taskA.pgm", a, h, w); //produce the image as taskA.pgm
}

//Task B
void inverthalf (int arr[MAX_H][MAX_W], int h, int w){
  int b[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if (col >= w/2){ //inverts only if the col corresponds to the right half
	b[row][col] = 255-arr[row][col];
      }
      else { //copy the image as normal
	b[row][col] = arr[row][col];
      }
    }
  }
  writeImage("taskB.pgm", b, h, w); //produce the image as taskB.pgm
}
