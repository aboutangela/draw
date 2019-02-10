#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = 0;
  c.blue = 0;

  clear_screen(s);

  int mx = 250;
  int my = 250;
  int max = 500;
  int may = 500;
  for(may = 500; may >= 0; may -= 5){
    c.blue += 5;
    draw_line(mx,my,max,may,s,c);
  }
  c.blue = 0;
  for(max = 500; max >= 0; max -= 5){
    c.red += 5;
    draw_line(mx,my,max,may,s,c);
  }
  c.red = 0;
  for(may = 0; may <= 500; may += 5){
    c.green += 5;
    draw_line(mx,my,max,may,s,c);
  }
  c.green = 0;
  for(max = 0; max <= 500; max += 5){
    c.red += 5;
    c.green += 5;
    draw_line(mx,my,max,may,s,c);
  }

  //display(s);
  save_extension(s, "lines.png");
  printf("lines.png\n");
}
