#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
Image alma; alma.readFromFile("tests/alma.png");
Image ill; ill.readFromFile("tests/i.png");

// StickerSheet sheet(alma, 3);
// sheet.addSticker(ill, 200, 200);
// sheet.addSticker(ill, 300, 300);
// sheet.addSticker(ill, 400, 400);
// sheet.removeSticker(2);
//  sheet.removeSticker(1);
//  sheet.removeSticker(0);
StickerSheet s1(alma, 5);
s1.addSticker(ill, 20, 200);
s1.addSticker(ill, 40, 200);

StickerSheet s2(s1);
s2.removeSticker(1);
s1.render().writeToFile("myImage1.png");
s2.render().writeToFile("myImage2.png");

// Image alma; alma.readFromFile("tests/alma.png");
//   Image i;    i.readFromFile("tests/i.png");
//
//   StickerSheet sheet(alma, 5);
//   sheet.addSticker(i, 20, 200);
//
//   sheet.changeMaxStickers(7);
//
//   Image expected;
//   expected.readFromFile("expected.png");
//   return 0;
}
