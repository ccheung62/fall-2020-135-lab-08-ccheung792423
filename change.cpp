#include <iostream>

#include "imageio.h"
#include "change.h"

//Task E
void scale (int arr[MAX_H][MAX_W], int h, int w) {
  int e[MAX_H][MAX_W];
  for (int row = 0; row < MAX_H/2; row++){
    for (int col = 0; col < MAX_W/2; col++){
      e[row*2][col*2] = arr[row][col];
      e[(row*2)+1][col*2] = arr[row][col];
      e[row*2][(col*2)+1] = arr[row][col];
      e[(row*2)+1][(col*2)+1] = arr[row][col];
    }
  }
  writeImage("taskE.pgm", e, MAX_H, MAX_W);
}


//Task F
void pixelate (int arr[MAX_H][MAX_W], int h, int w){
  int f[MAX_H][MAX_W];
  int avg = 0;
  for (int row = 0; row < h-1; row+=2){
    for (int col = 0; col < w-1; col+=2){
      avg += arr[row][col];
      avg += arr[row+1][col];
      avg += arr[row][col+1];
      avg += arr[row+1][col+1];
      avg /= 4;
      f[row][col] = avg;
      f[row+1][col] = avg;
      f[row][col+1] = avg;
      f[row+1][col+1] = avg;
      avg = 0;
    }
  }
  writeImage("taskF.pgm", f, h, w);
} 


//Task G
void kernel (int arr[MAX_H][MAX_W], int h, int w){
  int k[MAX_H][MAX_W];
  int a, b, c, d, e, f, g, ho, i;
  for (int row = 0; row < h; row++){
    for(int col = 0; col < w; col++){
      a = arr[row-1][col-1];
      b = arr[row-1][col];
      c = arr[row-1][col+1];
      d = arr[row][col-1];
      g = arr[row+1][col-1];
      f = arr[row][col+1];
      i = arr[row+1][col+1];
      ho = arr[row+1][col];
      if ((g+(2*ho)+i)-(a+(2*b)+c) >= 256){
	k[row][col] = 255;
      }
      else if ((g+(2*ho)+i)-(a+(2*b)+c) <= 0){
	k[row][col] = 0;
      }
      else {
	k[row][col] = (g+(2*ho)+i)-(a+(2*b)+c);
      }
    }
  }
  writeImage("taskG.pgm", k, h, w);
}
