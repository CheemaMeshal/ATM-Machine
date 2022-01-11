//============================================================================
// Name        : ATM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
//#include <unistd.h>
//#include <stdlib.h>
#include "settings.h"
#include "MAINmenu.h"
#include "settings.cpp"
#include "MAINmenu.cpp"
//using namespace std;
#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}
void Timer(int m) {
    settings t1;
	t1.displaytime();
	MAIN_menu m1;
	m1.Accessing();
	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}
/*
 * Main Canvas drawing function.
 * */
//Board *b;
void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, DARK_BLUE and DARK_BLUE values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.
    
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*DARK_BLUE Component*/,
			0.0/*DARK_BLUE Component*/, 0 /*Alpha component*/); // Red==DARK_BLUE==DARK_BLUE==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	//DrawSquare( 800,600 ,400,colors[RED]); 
	//Mushroom
	//DrawSquare( 250 , 250 ,20,colors[DARK_BLUE]); 
	//Display Score
//	DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Spider
	//DrawTriangle( 300, 450 , 3040, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)

    
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	

	
	DrawLine( 150, 0,  150 , 900 , 100, colors[MISTY_ROSE] );	
	DrawLine( 750, 5 ,  750 , 800 , 100, colors[MISTY_ROSE] );
		
    DrawLine( 460,250,735,250,100, colors[MISTY_ROSE] );
    DrawLine( 460,245,735,245,100, colors[MISTY_ROSE] );
    DrawLine( 460,240,735,240,100, colors[MISTY_ROSE] );
    
    
    
    DrawLine( 480,150,720,150,100, colors[MISTY_ROSE] );
    DrawLine( 480,145,720,145,100, colors[MISTY_ROSE] );
    DrawLine( 480,140,720,140,100, colors[MISTY_ROSE] );
	
	DrawString( 330, 650, "WELCOME TO ATM", colors[DARK_BLUE]);
	DrawString( 520, 270, "Take Cash Here", colors[DARK_BLUE]);
	DrawString( 500, 170, "Insert Envelope here", colors[DARK_BLUE]);
	
	DrawSquare( 200 ,220,50,colors[DARK_BLUE]); 
	DrawSquare( 200 ,140,50,colors[DARK_BLUE]); 
	DrawSquare( 200 ,60,50,colors[DARK_BLUE]);
	DrawSquare( 300 ,220,50,colors[DARK_BLUE]); 
	DrawSquare( 300 ,140,50,colors[DARK_BLUE]); 
	DrawSquare( 300 ,60,50,colors[DARK_BLUE]); 
	DrawSquare( 400 ,220,50,colors[DARK_BLUE]); 
	DrawSquare( 400 ,140,50,colors[DARK_BLUE]); 
	DrawSquare( 400 ,60,50,colors[DARK_BLUE]);
	DrawSquare( 300 ,-5,50,colors[DARK_BLUE]); 
	
	DrawString( 220, 235, "1", colors[MISTY_ROSE]);
	DrawString( 220, 155, "4", colors[MISTY_ROSE]);
	DrawString( 220, 75, "7", colors[MISTY_ROSE]);
	DrawString( 320, 235, "2", colors[MISTY_ROSE]);
	DrawString( 320, 155, "5", colors[MISTY_ROSE]);
	DrawString( 320, 75, "8", colors[MISTY_ROSE]);
	DrawString( 420, 235, "3", colors[MISTY_ROSE]);
	DrawString( 420, 155, "6", colors[MISTY_ROSE]);
	DrawString( 420, 75,"9", colors[MISTY_ROSE]);
	DrawString( 320, 15, "0", colors[MISTY_ROSE]);
	 int option=1;
	DrawString(200,570,"1) Access my account ", colors[MISTY_ROSE]);
    
    DrawString(220,500,"Enter :  ", colors[MISTY_ROSE]);
	glutSwapBuffers();  // do not modify this line..
	

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse poiner when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}
   if (key==13)
   {
    DrawTriangle( 300, 450 , 3040, 450 , 320 , 490, colors[MISTY_ROSE] );
   }
	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */


/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
    
	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 900, height = 700; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP PROJECT"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	//Register your functions to the library,
	 //you are telling the library names of function to call for different tasks.
//	glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); 

//ell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
 

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	// STartGame();
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
