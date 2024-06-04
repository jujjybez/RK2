#ifndef OPENGL_DRAW_STRATEGY_H
#define OPENGL_DRAW_STRATEGY_H

#include "Circle.h"
#include "Square.h"
//#include /* OpenGL graphics library headers */

class OpenGLDrawStrategy
{
 public:
   explicit OpenGLDrawStrategy( /* Drawing related arguments */ )
   {}

   void operator()( Circle const& circle ) const
   {
      std::cout << std::endl << "Draw circle" << std::endl;
      // ... Implementing the logic for drawing a circle by means of OpenGL
   }
   void operator()( Square const& square ) const
   {
      std::cout << std::endl << "Draw square" << std::endl;
      // ... Implementing the logic for drawing a square by means of OpenGL
   }

 private:
   /* Drawing related data members, e.g., colors, textures, ... */
};

#endif
