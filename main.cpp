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

  std::string input = "image1.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); // read it from the file "inImage.pgm"
  // h and w were passed by reference and
  // now contain the dimensions of the picture
  // and the 2-dimesional array img contains the image data
  
  // Now we can manipulate the image the way we like
  // for example we copy its contents into a new array
  invert(img,h,w);
  inverthalf(img,h,w);
  box(img,h,w);
  frame(img,h,w);
  scale(img,h,w);
  pixelate(img,h,w);
  
  
  // and save this new image to file "outImage.pgm"
  //writeImage("outImage.pgm",a, h, w);

  
  return 0;
}


