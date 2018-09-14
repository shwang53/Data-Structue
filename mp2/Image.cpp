
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "Image.h"

#include <iostream>
#include <cmath>
#include <cstdlib>

namespace cs225{
    void Image::lighten(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.l += 0.1;
          if(pixel.l > 1)
            pixel.l = 1;
        }
      }

    }
    void Image::lighten(double amount){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.l += amount;
          if(pixel.l > 1)
            pixel.l = 1;
        }
      }
    }

    void Image::darken(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.l -= 0.1;
          if(pixel.l < 0)
            pixel.l = 0;
        }
      }
    }
    void Image::darken(double amount){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.l -= amount;
          if(pixel.l < 0)
            pixel.l = 0;
        }
      }
    }
    void Image::saturate(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.s += 0.1;
          if(pixel.s > 1)
            pixel.s = 1;
        }
      }

    }
    void Image::saturate(double amount){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.s += amount;
          if(pixel.s > 1)
            pixel.s = 1;
        }
      }
    }
    void Image::desaturate(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.s -= 0.1;
          if(pixel.s < 0)
            pixel.s = 0;
        }
      }

    }
    void Image::desaturate(double amount){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.s -= amount;
          if(pixel.s < 0)
            pixel.s = 0;
        }
      }
    }

    void Image::grayscale(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.s =0;
      }
    }

    void Image::rotateColor (double degrees){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          pixel.h += degrees;
          if(pixel.h > 360){
            pixel.h -= 360;
          }
      }
    }
    void Image::illinify(){
      for(unsigned x =0; x<width(); x++){
        for(unsigned y=0; y<height(); y++){
          HSLAPixel & pixel = this->getPixel(x,y);

          if(pixel.h > 113.5 && pixel.h <= 293.5){
            pixel.h = 216.0;
          }else{
            pixel.h =11.0;
          }
      }

    }
    void Image::scale(double factor){

    }
    void Image::scale(unsigned w, unsigned h{

    }
}
