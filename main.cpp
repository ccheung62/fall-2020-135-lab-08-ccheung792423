#include <iostream> 

#include "imageio.h"
#include "invert.h"
#include "add.h"
#include "change.h"

//Task A, B is in invert.cpp
//Task C, D is in add.cpp
//Task E, F, G is in change.cpp

int main()
{

  std::string input = "image2.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); // read it from the file "inImage.pgm"
  // h and w were passed by reference and
  // now contain the dimensions of the picture
  // and the 2-dimesional array img contains the image data

  //Task A
  invert(img,h,w);
  //Task B
  inverthalf(img,h,w);
  //Task C
  box(img,h,w);
  //Task D
  frame(img,h,w);
  //Task E
  scale(img,h,w);
  //Task F
  pixelate(img,h,w);
  //Task G
  kernel(img,h,w);
 
  return 0;
}


