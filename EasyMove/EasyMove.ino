
/* 
  A simple way to run the Zumo bot in a programmed fashion.  In setup() below, add commands
  for what you want the robot to do.  Once compiled and uploaded the commands will be run in 
  sequence.

  Paul G. Talaga
  Aug 2017
  */

#include "Prog.h"


Program p;

/* Possible commands:
 *    p.forward( distance in inches)
 *    p.reverse( distance in inches)
 *    p.right( angle in degrees)
 *    p.left(  angle in degrees)
 */

 float distance = 4;

void setup()
{
//  p.forward(distance); // up
//  
//  p.right(90);
//  p.forward(distance); //right
//  
//  p.left(90);
//  p.forward(distance); // up
//  
//  p.left(90);
//  p.forward(distance * 2); // left
//  
//  p.right(90);
//  p.forward(distance);// up
//
//  p.right(90);
//  p.forward(distance * 3);// right
//
//  p.left(90);
//  p.forward(distance);// up
//
//  p.left(90);
//  p.forward(distance * 3); // left
//
//  p.right(90);
//  p.forward(distance); // up
//
//  p.right(90);
//  p.forward(distance /2); //right
//
//  p.left(90);
//  p.forward(distance); // up
//
//  p.left(90);
//  p.forward(distance); // left
//  
//  p.left(90);
//  p.forward(distance); // down
//  
//  p.left(90);
//  p.forward(distance/2); // right
//  
//  p.left(90);
//  p.forward(distance /2); // up
//
//  p.right(90);
//  p.forward(distance /2); // right
//  
//  p.left(90);
//  p.forward(distance * 2); // up
//
//  p.right(90);
//  p.forward(distance * 3); // right
//
//  p.right(90);
//  p.forward(distance * 9); // down
//
//  p.left(90);
//  p.forward(distance); // right
//
//  p.right(90);
//  p.forward(distance * 9); // up


  p.forward(10); // up
  
  p.right(90);
  p.forward(10); //right
  
  p.left(90);
  p.forward(10); // up
  
  p.left(90);
  p.forward(20); // left
  
  p.right(90);
  p.forward(10);// up

  p.right(90);
  p.forward(30);// right

  p.left(90);
  p.forward(10);// up

  p.left(90);
  p.forward(30); // left

  p.right(90);
  p.forward(10); // up

  p.right(90);
  p.forward(5); //right

  p.left(90);
  p.forward(10); // up

  p.left(90);
  p.forward(10); // left
  
  p.left(90);
  p.forward(10); // down
  
  p.left(90);
  p.forward(5); // right
  
  p.left(90);
  p.forward(5); // up

  p.right(90);
  p.forward(5); // right
  
  p.left(90);
  p.forward(20); // up

  p.right(90);
  p.forward(30); // right

  p.right(90);
  p.forward(90); // down

  p.left(90);
  p.forward(10); // right

  p.right(90);
  p.forward(90); // up


}

void loop()
{
  // This is the function in the Program class which runs all instructions.
  p.update();
}
