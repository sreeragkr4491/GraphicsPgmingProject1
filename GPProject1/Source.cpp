//Lab1 opening the window for graphics

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//int main(void)//1. main fun
//{
//	GLFWwindow* window;//pointer variable
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		return -1;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(800, 800, " opengl GAME WINDOW", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//	// make the window context current
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab2  opening the windows of graphics with message in console window


//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	GLFWwindow* window;//pointer variable
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//		// create a windowmode and its opengl context
//	window = glfwCreateWindow(800, 800, " opengl GAME WINDOW", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//	
//	// make the window context current
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab3 background color

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;  
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	 
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//lab4 drawing

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	for window width and height
//	GLint wid = 800;  
//	GLint height = 800;
//	for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	 create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	 make the window context current
//	glfwMakeContextCurrent(window);
//	 
//	float vertices[] =
//	{
//		-0.5f, -0.5f, 0.0f,
//	 0.5f, -0.5f, 0.0f,
//	 0.0f,  0.5f, 0.0f
//	};
//
//
//
//	loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//		
//		draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab 5

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//	/*	-0.5f, -0.5f, 0.0f,
//	 0.5f, -0.5f, 0.0f,
//	 0.0f,  0.5f, 0.0f*/
//		-0.0f,-0.25f,0.0f,
//		0.25f,-0.25f,0.0f,
//		0.0f,0.25f,0.0f
//	};
//
//
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//lab 6 sqaure

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		
//		0.4f,0.3f,0.0f,  //a
//		0.6f,0.3f,0.0f,   //b
//		0.6f,0.6f,0.0f,  //c
//
//		0.6f,0.6f,0.0f,   //c
//		0.4f,0.6f,0.0f,   //d
//		0.4f,0.3f,0.0f   //a
//
//	};
//
//
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//


//lab 7 house

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	 create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	 make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		
//		0.4f,0.3f,0.0f,  //a
//		0.6f,0.3f,0.0f,   //b
//		0.6f,0.6f,0.0f,  //c
//
//		0.6f,0.6f,0.0f,   //c
//		0.4f,0.6f,0.0f,   //d
//		0.4f,0.3f,0.0f,   //a
//
//		0.6f,0.6f,0.0f,   //c
//		0.5f,0.8f,0.0f,   //e
//		0.4f,0.6f,0.0f    //d
//	};
//
//
//
//	loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 9);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab 8 

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		
//		0.4f,0.3f,0.0f,  //a
//		0.6f,0.3f,0.0f,   //b
//		0.6f,0.6f,0.0f,  //c
//
//		0.6f,0.6f,0.0f,   //c
//		0.4f,0.6f,0.0f,   //d
//		0.4f,0.3f,0.0f,   //a
//
//		0.6f,0.6f,0.0f,   //c
//		0.5f,0.8f,0.0f,   //e
//		0.4f,0.6f,0.0f,    //d
//
//		0.8f,0.8f,0.0f,    //a
//		0.9f,0.8f,0.0f,    //b
//		0.9f,0.9f,0.0f     //c
//	};
//
//
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 12);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab 9 quad/rectangle


//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(wid, height, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		0.3f,0.3f,0.0f,  //a
//		0.6f,0.3f,0.0f,   //b
//		0.6f,0.6f,0.0f,  //c
//		0.3f,0.6f,0.0f    //d
//		
//	};
//
//
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0.5, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_QUADS , 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//lab 10 screen resolution(****Must change the drawing vertices according to your width and height)

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		100,100,0,
//		300,100,0,
//		300,300,0
//
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//lab 11

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		100,100,0,
//		300,100,0,
//		300,300,0,
//		100,300,0
//
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw triangle
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_QUADS, 0, 4);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}


//lab 12  how to draw a point 

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertex[] =
//	{
//		S_W/2,S_H/2
//
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw point
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(50);
//		glVertexPointer(2, GL_FLOAT, 0, vertex);
//		glDrawArrays(GL_POINTS, 0, 1);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//


//lab 13 how to draw multiple points

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertex[] =
//	{
//		S_W / 2,S_H / 2
//
//	};
//
//	float vertex1[] =
//	{
//		S_W / 3,S_H / 3
//
//	};
//
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw point
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(10);
//		glVertexPointer(2, GL_FLOAT, 0, vertex);
//		glDrawArrays(GL_POINTS, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw point
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glPointSize(10);
//		glVertexPointer(2, GL_FLOAT, 0, vertex1);
//		glDrawArrays(GL_POINTS, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//
//


//lab 14  draw a line

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertex[] =
//	{
//		S_W / 2,S_H / 2,
//		S_W / 3,S_H / 3
//	};
//	float vertex1[] =
//	{
//		S_W / 4,S_H / 4,
//		S_W / 5,S_H / 5
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw point
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw point
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex1);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//


//lab 15  diff ways of drawing lines

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertex[] =
//	{
//		S_W / 2,S_H / 2,
//		S_W / 3,S_H / 3
//	};
//	float vertex1[] =
//	{
//		S_W / 3,S_H / 4,
//		S_W / 5,S_H / 5
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw point
//		//glEnable(GL_LINE_SMOOTH);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw point
//		//glEnable(GL_LINE_STIPPLE);
//		//glLineStipple(1, 0x00FF);
//		//glLineStipple(1, 0x0C0F);
//		//glLineStipple(1, 0x00FF);
//		glLineStipple(1, 0xAAAA);
//
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex1);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}



//lab 16 house

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//house
//		200,200,0,
//		600,200,0,
//		600,500,0,
//		200,500,0,
//		200,200,0,
//		200,500,0,
//		600,200,0,
//		600,500,0,
//
//
//		400,700,0,
//		200,500,0,
//		400,700,0,
//		600,500,0,
//		
//		//window
//		250,300,0,
//		250,400,0,
//
//		250,400,0,
//		300,400,0,
//
//		300,400,0,
//		300,300,0,
//
//		300,300,0,
//		250,300,0,
//
//		//window2
//		500,300,0,
//		500,400,0,
//
//		500,400,0,
//		550,400,0,
//
//		550,400,0,
//		550,300,0,
//
//		550,300,0,
//		500,300,0,
//
//		//door
//		350,200,0,
//		350,400,0,
//
//		350,400,0,
//		450,400,0,
//
//		450,400,0,
//		450,200,0
//
//	};
//	
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 0, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw lines
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_LINES, 0, 34);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		////draw quads
//		//glEnableClientState(GL_VERTEX_ARRAY);
//		//glVertexPointer(3, GL_FLOAT, 0, vertices1);
//		//glDrawArrays(GL_QUADS, 0, 1);
//		//glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//



//lab 17  terrain

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//road
//		0,100,0,
//		1000,100,0,
//
//		0,50,0,
//		1000,50,0,
//		
//		//bus
//		700,100,0,
//		900,100,0,
//		900,100,0,
//		900,175,0,
//		900,175,0,
//		700,175,0,
//		700,175,0,
//		700,100,0,
//
//		//hills
//		0,650,0,
//		100,750,0,
//		100,750,0,
//		200,650,0,
//		200,650,0,
//		300,775,0,
//		300,775,0,
//		400,600,0,
//		400,600,0,
//		500,750,0,
//		500,750,0,
//		600,600,0,
//		600,600,0,
//		700,775,0,
//		700,775,0,
//		800,650,0,
//		800,650,0,
//		900,750,0,
//		900,750,0,
//		1000,650,0,
//
//		//tree
//		550,500,0,
//		600,550,0,
//		600,550,0,
//		650,500,0,
//		650,500,0,
//		550,500,0,
//
//		585,500,0,
//		585,450,0,
//		585,450,0,
//		600,450,0,
//		600,450,0,
//		600,500,0,
//
//		//house
//		100,200,0,
//		200,200,0,
//		200,200,0,
//		200,300,0,
//		200,300,0,
//		100,300,0,
//		100,300,0,
//		100,200,0,
//
//		100,300,0,
//		150,350,0,
//		150,350,0,
//		200,300,0,
//
//		//left window
//		120,250,0,
//		130,250,0,
//		130,250,0,
//		130,270,0,
//		130,270,0,
//		120,270,0,
//		120,270,0,
//		120,250,0,
//
//		//right window
//		170,250,0,
//		180,250,0,
//		180,250,0,
//		180,270,0,
//		
//		180,270,0,
//		170,270,0,
//		
//		170,270,0,
//		170,250,0,
//	};
//
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 0, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw lines
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_LINES, 0, 100);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//


//lab 18 house with color

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		//road
//		0,100,0,
//		1000,100,0,
//		1000,25,0,
//		0,25,0
//	};
//	float colorRoad[] =
//	{
//		//rgb
//		0,0,0,
//		0,0,0,
//		0,0,0
//	};
//	float bus[] =
//	{
//		//bus
//		700,125,0,
//		900,125,0,
//		900,200,0,
//		700,200,0,
//	};
//	float colorbus[] =
//	{
//		//rgb
//		1,0,0,
//		1,0,0,
//		1,0,0,
//		1,0,0
//	};
//	float house[] = {
//		//house
//		100,200,0,
//		200,200,0,
//		200,300,0,
//		100,300,0,
//		
//		100,300,0,
//		150,350,0,
//		200,300,0
//	};
//	float colorhs[] =
//	{
//		//rgb
//		0,0,1,
//		0,0,1,
//		0,0,1,
//		0,0,1
//	};
//	float lwindow[] =
//	{
//		//left window
//			120,250,0,
//			130,250,0,
//			130,270,0,
//			120,270,0,
//	};
//	float colorlw[] =
//	{
//		//rgb
//		1,1,1,
//		1,1,1,
//		1,1,1
//	};
//	float rwindow[] =
//	{
//		//right window
//		170,250,0,
//		180,250,0,
//		180,270,0,
//		170,270,0,
//	};
//	float tree[] =
//	{
//		//tree
//			550,500,0,
//			600,550,0,
//			650,500,0,
//			550,500,0,
//
//	};
//	float tree1[] =
//	{
//		//tree
//		585, 500, 0,
//		585, 450, 0,
//		600, 450, 0,
//		600, 500, 0,
//		585, 500, 0,
//	};
//	float hill[] = {
//		//hills
//		0,650,0,
//		100,750,0,
//		250,700,0,
//		200,650,0,
//		0,650,0,
//
//	};
//	float hill1[] = {
//		200,650,0,
//		300,775,0,
//		450,700,0,
//		400,650,0,
//		200,650,0,
//		};
//
//	float hill2[] = {
//		400, 650, 0,
//		500, 750, 0,
//		650, 700, 0,
//		600, 650, 0,
//		400, 650, 0
//	};
//	float hill3[] = {
//		600, 650, 0,
//		700, 775, 0,
//		850, 700, 0,
//		800, 650, 0,
//		600, 650, 0,
//	};
//	float hill4[] = {
//		800,650,0,
//		900,750,0,
//		1000,650,0,
//		800,650,0
//	};
//
//	float colorhill[] = {
//		//rgb
//		//as many vertex as many points
//		0,1,0,
//		0,1,0,
//		0,1,0,
//		0,1,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//road
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorRoad);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//bus
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 0, 0);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorbus);
//		glVertexPointer(3, GL_FLOAT, 0, bus);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//house
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(0,0,1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorhs);
//		glVertexPointer(3, GL_FLOAT, 0, house);
//		glDrawArrays(GL_POLYGON, 0, 7);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//lwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, lwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//rwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, rwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//hills
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill1);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill2);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill3);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill4);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//



//lab 19 introduction of keys

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//void keyCall(GLFWwindow *window, int key, int scancode, int action, int mods);
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	//calling of key function
//	glfwSetKeyCallback(window, keyCall);
//
//	float vertices[] =
//	{
//		//road
//		0,100,0,
//		1000,100,0,
//		1000,25,0,
//		0,25,0
//	};
//	float colorRoad[] =
//	{
//		//rgb
//		0,0,0,
//		0,0,0,
//		0,0,0
//	};
//	float bus[] =
//	{
//		//bus
//		700,125,0,
//		900,125,0,
//		900,200,0,
//		700,200,0,
//	};
//	float colorbus[] =
//	{
//		//rgb
//		1,0,0,
//		1,0,0,
//		1,0,0,
//		1,0,0
//	};
//	float house[] = {
//		//house
//		100,200,0,
//		200,200,0,
//		200,300,0,
//		100,300,0,
//
//		100,300,0,
//		150,350,0,
//		200,300,0
//	};
//	float colorhs[] =
//	{
//		//rgb
//		0,0,1,
//		0,0,1,
//		0,0,1,
//		0,0,1
//	};
//	float lwindow[] =
//	{
//		//left window
//			120,250,0,
//			130,250,0,
//			130,270,0,
//			120,270,0,
//	};
//	float colorlw[] =
//	{
//		//rgb
//		1,1,1,
//		1,1,1,
//		1,1,1
//	};
//	float rwindow[] =
//	{
//		//right window
//		170,250,0,
//		180,250,0,
//		180,270,0,
//		170,270,0,
//	};
//	float tree[] =
//	{
//		//tree
//			550,500,0,
//			600,550,0,
//			650,500,0,
//			550,500,0,
//
//	};
//	float tree1[] =
//	{
//		//tree
//		585, 500, 0,
//		585, 450, 0,
//		600, 450, 0,
//		600, 500, 0,
//		585, 500, 0,
//	};
//	float hill[] = {
//		//hills
//		0,650,0,
//		100,750,0,
//		250,700,0,
//		200,650,0,
//		0,650,0,
//
//	};
//	float hill1[] = {
//		200,650,0,
//		300,775,0,
//		450,700,0,
//		400,650,0,
//		200,650,0,
//	};
//
//	float hill2[] = {
//		400, 650, 0,
//		500, 750, 0,
//		650, 700, 0,
//		600, 650, 0,
//		400, 650, 0
//	};
//	float hill3[] = {
//		600, 650, 0,
//		700, 775, 0,
//		850, 700, 0,
//		800, 650, 0,
//		600, 650, 0,
//	};
//	float hill4[] = {
//		800,650,0,
//		900,750,0,
//		1000,650,0,
//		800,650,0
//	};
//
//	float colorhill[] = {
//		//rgb
//		//as many vertex as many points
//		0,1,0,
//		0,1,0,
//		0,1,0,
//		0,1,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//road
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorRoad);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//bus
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 0, 0);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorbus);
//		glVertexPointer(3, GL_FLOAT, 0, bus);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//house
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(0, 0, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorhs);
//		glVertexPointer(3, GL_FLOAT, 0, house);
//		glDrawArrays(GL_POLYGON, 0, 7);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//lwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, lwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//rwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, rwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//hills
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill1);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill2);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill3);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill4);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//
//}
//
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	cout << "key pressed as ASCII is =="<< key<<endl;
//	cout << "key pressed as scancode is ==" << scancode << endl;
//	cout << "key pressed as action is ==" << action << endl;
//	cout << "key pressed as mods is ==" << mods << endl;
//	if (key == 'Z')
//	{
//		cout << "Pressed key is Z" << endl;
//	}
//	if (key == 'X')
//	{
//		cout << "Pressed key is X" << endl;
//	}
//	if (key == GLFW_KEY_LEFT)
//	{
//		cout << "Pressed key is LEFT ARROW" << endl;
//	}
//}
//




//lab 20 keyboard test 2

//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//void TestKey(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	cout << "The key ASCII is == " << key << endl;
//	cout << "The key scancode is == " << scancode << endl;
//	cout << "The key action is == " << action << endl;
//	cout << "The key mods is == " << mods << endl;
//	if (GLFW_KEY_SPACE)
//	{
//		cout << "hey SPACE key is pressed" << endl;
//	}
//}
//
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 800;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//	//calling of keyboard
//	glfwSetKeyCallback(window, TestKey);
//
//	float vertex[] =
//	{
//		S_W / 2,S_H / 2,
//		S_W / 3,S_H / 3
//	};
//	float vertex1[] =
//	{
//		S_W / 3,S_H / 4,
//		S_W / 5,S_H / 5
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//draw point
//		//glEnable(GL_LINE_SMOOTH);
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//draw point
//		//glEnable(GL_LINE_STIPPLE);
//		//glLineStipple(1, 0x00FF);
//		//glLineStipple(1, 0x0C0F);
//		//glLineStipple(1, 0x00FF);
//		glLineStipple(1, 0xAAAA);
//
//		glLineWidth(20);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glVertexPointer(2, GL_FLOAT, 0, vertex1);
//		glDrawArrays(GL_LINES, 0, 2);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//

//lab 21 mouse button,scrolling pgm


//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//static void cursorPosition(GLFWwindow* window, double xposi, double yposi);
//void cursorEnter(GLFWwindow* window, int enter);
//void mouseBtn(GLFWwindow* window, int btn, int act, int mods);
//void scrollBtn(GLFWwindow* window, double xoffset, double yoffset);
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 1000;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//mouse functions calling 
//	glfwSetCursorPosCallback(window, cursorPosition);
//	glfwSetCursorEnterCallback(window, cursorEnter);
//	glfwSetMouseButtonCallback(window, mouseBtn);
//	glfwSetScrollCallback(window, scrollBtn);
//
//	float vertices[] =
//	{
//		//road
//		0,100,0,
//		1000,100,0,
//		1000,25,0,
//		0,25,0
//	};
//	float colorRoad[] =
//	{
//		//rgb
//		0,0,0,
//		0,0,0,
//		0,0,0
//	};
//	float bus[] =
//	{
//		//bus
//		700,125,0,
//		900,125,0,
//		900,200,0,
//		700,200,0,
//	};
//	float colorbus[] =
//	{
//		//rgb
//		1,0,0,
//		1,0,0,
//		1,0,0,
//		1,0,0
//	};
//	float house[] = {
//		//house
//		100,200,0,
//		200,200,0,
//		200,300,0,
//		100,300,0,
//		
//		100,300,0,
//		150,350,0,
//		200,300,0
//	};
//	float colorhs[] =
//	{
//		//rgb
//		0,0,1,
//		0,0,1,
//		0,0,1,
//		0,0,1
//	};
//	float lwindow[] =
//	{
//		//left window
//			120,250,0,
//			130,250,0,
//			130,270,0,
//			120,270,0,
//	};
//	float colorlw[] =
//	{
//		//rgb
//		1,1,1,
//		1,1,1,
//		1,1,1
//	};
//	float rwindow[] =
//	{
//		//right window
//		170,250,0,
//		180,250,0,
//		180,270,0,
//		170,270,0,
//	};
//	float tree[] =
//	{
//		//tree
//			550,500,0,
//			600,550,0,
//			650,500,0,
//			550,500,0,
//
//	};
//	float tree1[] =
//	{
//		//tree
//		585, 500, 0,
//		585, 450, 0,
//		600, 450, 0,
//		600, 500, 0,
//		585, 500, 0,
//	};
//	float hill[] = {
//		//hills
//		0,650,0,
//		100,750,0,
//		250,700,0,
//		200,650,0,
//		0,650,0,
//
//	};
//	float hill1[] = {
//		200,650,0,
//		300,775,0,
//		450,700,0,
//		400,650,0,
//		200,650,0,
//		};
//
//	float hill2[] = {
//		400, 650, 0,
//		500, 750, 0,
//		650, 700, 0,
//		600, 650, 0,
//		400, 650, 0
//	};
//	float hill3[] = {
//		600, 650, 0,
//		700, 775, 0,
//		850, 700, 0,
//		800, 650, 0,
//		600, 650, 0,
//	};
//	float hill4[] = {
//		800,650,0,
//		900,750,0,
//		1000,650,0,
//		800,650,0
//	};
//
//	float colorhill[] = {
//		//rgb
//		//as many vertex as many points
//		0,1,0,
//		0,1,0,
//		0,1,0,
//		0,1,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//road
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorRoad);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//bus
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 0, 0);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorbus);
//		glVertexPointer(3, GL_FLOAT, 0, bus);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//house
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(0,0,1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorhs);
//		glVertexPointer(3, GL_FLOAT, 0, house);
//		glDrawArrays(GL_POLYGON, 0, 7);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//lwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, lwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//rwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, rwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//hills
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill1);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill2);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill3);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill4);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//
//
//static void cursorPosition(GLFWwindow* window, double xposi, double yposi)
//{
//	cout << "x posi==" << xposi << "!!" << "y posi==" << yposi << endl;
//
//}
//void cursorEnter(GLFWwindow* window, int enter)
//{
//	if (enter)
//	{
//		cout << "hey you entered inside window" << endl;
//	}
//	else
//	{
//		cout << "you left the window" << endl;
//	}
//}
//void mouseBtn(GLFWwindow* window, int btn, int act, int mods)
//{
//	if (btn == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_PRESS)
//	{
//		cout << "Right button has been pressed" << endl;
//	}
//	if (btn == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_PRESS)
//	{
//		cout << "LEft button has been pressed" << endl;
//	}
//}
//void scrollBtn(GLFWwindow* window, double xoffset, double yoffset)
//{
//	cout << "xoffset==" << xoffset << "!!" << "yoffset==" << yoffset << endl;
//}
//

//lab 22 with functions

//
//#include<GL/glew.h>//glew lib
//#include<GLFW/glfw3.h>//glfw lib
//#include<iostream>
//#define S_W 1000
//#define S_H 800
//using namespace std;
//
//
//void display();
//
//int main(void)//1. main fun
//{
//	//for window width and height
//	GLint wid = 1000;
//	GLint height = 800;
//	//for holding window
//	GLFWwindow* window;//pointer variable 
//
//	glfwInit();//glfw initialize
//	if (!glfwInit())
//	{
//		cout << "glfw init function error" << endl;
//	}
//	else
//	{
//		cout << "glfw init sucess" << endl;
//	}
//	// create a windowmode and its opengl context
//	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		cout << "window error" << endl;
//	}
//	else
//	{
//		cout << "window sucess" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	//mouse functions calling 
//	display();
//	float vertices[] =
//	{
//		//road
//		0,100,0,
//		1000,100,0,
//		1000,25,0,
//		0,25,0
//	};
//	float colorRoad[] =
//	{
//		//rgb
//		0,0,0,
//		0,0,0,
//		0,0,0
//	};
//	
//	float bus[] =
//	{
//		//bus
//		700,125,0,
//		900,125,0,
//		900,200,0,
//		700,200,0,
//	};
//	float colorbus[] =
//	{
//		//rgb
//		1,0,0,
//		1,0,0,
//		1,0,0,
//		1,0,0
//	};
//	float house[] = {
//		//house
//		100,200,0,
//		200,200,0,
//		200,300,0,
//		100,300,0,
//		
//		100,300,0,
//		150,350,0,
//		200,300,0
//	};
//	float colorhs[] =
//	{
//		//rgb
//		0,0,1,
//		0,0,1,
//		0,0,1,
//		0,0,1
//	};
//	float lwindow[] =
//	{
//		//left window
//			120,250,0,
//			130,250,0,
//			130,270,0,
//			120,270,0,
//	};
//	float colorlw[] =
//	{
//		//rgb
//		1,1,1,
//		1,1,1,
//		1,1,1
//	};
//	float rwindow[] =
//	{
//		//right window
//		170,250,0,
//		180,250,0,
//		180,270,0,
//		170,270,0,
//	};
//	float tree[] =
//	{
//		//tree
//			550,500,0,
//			600,550,0,
//			650,500,0,
//			550,500,0,
//
//	};
//	float tree1[] =
//	{
//		//tree
//		585, 500, 0,
//		585, 450, 0,
//		600, 450, 0,
//		600, 500, 0,
//		585, 500, 0,
//	};
//	float hill[] = {
//		//hills
//		0,650,0,
//		100,750,0,
//		250,700,0,
//		200,650,0,
//		0,650,0,
//
//	};
//	float hill1[] = {
//		200,650,0,
//		300,775,0,
//		450,700,0,
//		400,650,0,
//		200,650,0,
//		};
//
//	float hill2[] = {
//		400, 650, 0,
//		500, 750, 0,
//		650, 700, 0,
//		600, 650, 0,
//		400, 650, 0
//	};
//	float hill3[] = {
//		600, 650, 0,
//		700, 775, 0,
//		850, 700, 0,
//		800, 650, 0,
//		600, 650, 0,
//	};
//	float hill4[] = {
//		800,650,0,
//		900,750,0,
//		1000,650,0,
//		800,650,0
//	};
//
//	float colorhill[] = {
//		//rgb
//		//as many vertex as many points
//		0,1,0,
//		0,1,0,
//		0,1,0,
//		0,1,0
//	};
//
//	//FOR SCREEN RESOLUTION
//	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
//	glMatrixMode(GL_PROJECTION);// for change matrix mode
//	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
//	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)
//
//	//loop untill the user not close the window
//	while (!glfwWindowShouldClose(window))
//	{
//
//		//for background color
//		glClearColor(0, 1, 1, 0); //for get the RGB color
//		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer
//
//		//road
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorRoad);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//bus
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 0, 0);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorbus);
//		glVertexPointer(3, GL_FLOAT, 0, bus);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//house
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(0,0,1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorhs);
//		glVertexPointer(3, GL_FLOAT, 0, house);
//		glDrawArrays(GL_POLYGON, 0, 7);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//lwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, lwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//rwindow
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glColor3f(1, 1, 1);
//		//glEnableClientState(GL_COLOR_ARRAY);
//		//glColorPointer(3, GL_FLOAT, 0, colorlw);
//		glVertexPointer(3, GL_FLOAT, 0, rwindow);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		//glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		//tree
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//
//		//hills
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill);
//		glDrawArrays(GL_POLYGON, 0, 5);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill1);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill2);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill3);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glColorPointer(3, GL_FLOAT, 0, colorhill);
//		glVertexPointer(3, GL_FLOAT, 0, hill4);
//		glDrawArrays(GL_POLYGON, 0, 4);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//for swap the new color for window
//		glfwPollEvents();//it detects different event and process
//	}
//	glfwTerminate();
//	return 0;
//}
//
//
//void drawroad()
//{
//	
//}
//
//void display()
//{
//}

//lab 23 3D Drawing

//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		-1, -1, -1,
//		-1, -1,  1,
//		-1,  1,  1,
//		-1,  1, -1,//left
//
//		 1, -1, -1,
//		 1, 1, -1,
//		 1, 1, 1,
//		 1, -1, 1,//right
//
//		-1, -1, -1,   -1, -1, 0.4,   1, -1, 0.4,   1, -1, -1,//bottom
//	-1, 1, -1,   -1, 0.4, 1,   1, 0.4, 1,   1, 1, -1,//top
//	-0.5, -1, -1,   -0.5, 0.5, -1,   0.5,  0.5, -1,  0.5, -1, -1,//back
//	-0.25, -0.25, 1,  -0.25, 0.25, 1,  0.25, 0.25, 1,  0.25, -0.25, 1//front
//
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -1);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}


//lab 24 3D


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		-1,-1,1,    //b
//		1,-1,1,     //c  //front
//		1,1,1,      //d
//		-1,1,1,     //g
//
//		-1,-1,-1,  //a
//		1,-1,-1,   //h   //back
//		1,1,-1,     //e 
//		-1,1,-1,    //f
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //left
//		-1,1,1,     //g
//		-1,1,-1,     //f
//	
//		-1,1,-1,     //f
//		-1,1,1,     //g   //top
//		1,1,1,      //d  
//		1,1,-1,     //e 
//
//		1,1,-1,     //e 
//		1,-1,-1,   //h    //right
//		1,-1,1,     //c
//		1,1,1,      //d
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//		1,-1,-1,   //h
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT);//to clear the buffer
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -1);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}



//lab 25 How to rotate

//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	float vertices[] =
//	{
//		-1,-1,1,    //b
//		1,-1,1,     //c  //front
//		1,1,1,      //d
//		-1,1,1,     //g
//
//		-1,-1,-1,  //a
//		1,-1,-1,   //h   //back
//		1,1,-1,     //e 
//		-1,1,-1,    //f
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //left
//		-1,1,1,     //g
//		-1,1,-1,     //f
//
//		-1,1,-1,     //f
//		-1,1,1,     //g   //top
//		1,1,1,      //d  
//		1,1,-1,     //e 
//
//		1,1,-1,     //e 
//		1,-1,-1,   //h    //right
//		1,-1,1,     //c
//		1,1,1,      //d
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//		1,-1,-1,   //h
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -5);
//
//		static float angle = 0;
//		glRotatef(angle, 0, 1, -1);
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 24);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		angle += 0.2;
//		
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}


//lab 26 cube rotate with key

//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow *window, int key, int scancode, int action, int mods);
//GLfloat rotationx,rotationy;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCall);
// 
// glEnable(GL_DEPTH_TEST); // Depth Testing  
//
//	float vertices[] =
//	{
//		-1,-1,1,    //b
//		1,-1,1,     //c  //front
//		1,1,1,      //d
//		-1,1,1,     //g
//
//		-1,-1,-1,  //a
//		1,-1,-1,   //h   //back
//		1,1,-1,     //e 
//		-1,1,-1,    //f
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //left
//		-1,1,1,     //g
//		-1,1,-1,     //f
//
//		-1,1,-1,     //f
//		-1,1,1,     //g   //top
//		1,1,1,      //d  
//		1,1,-1,     //e 
//
//		1,1,-1,     //e 
//		1,-1,-1,   //h    //right
//		1,-1,1,     //c
//		1,1,1,      //d
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//		1,-1,-1,   //h
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -5);
//
//		
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 28);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationspeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationspeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationspeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationspeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationspeed;
//			break;
//		default:
//			break;
//		}
//	}
//}

//lab 27 change color by pressing function keys


//
//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow *window, int key, int scancode, int action, int mods);
//GLfloat rotationx,rotationy;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCall);
//	//*************************************************** must enable for visibility of depth of 3d object.
//	glEnable(GL_DEPTH_TEST); // Depth Testing  
//
//
//	float vertices[] =
//	{
//		-1,-1,1,    //b
//		1,-1,1,     //c  //front
//		1,1,1,      //d
//		-1,1,1,     //g
//
//		-1,-1,-1,  //a
//		1,-1,-1,   //h   //back
//		1,1,-1,     //e 
//		-1,1,-1,    //f
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //left
//		-1,1,1,     //g
//		-1,1,-1,     //f
//
//		-1,1,-1,     //f
//		-1,1,1,     //g   //top
//		1,1,1,      //d  
//		1,1,-1,     //e 
//
//		1,1,-1,     //e 
//		1,-1,-1,   //h    //right
//		1,-1,1,     //c
//		1,1,1,      //d
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//		1,-1,-1,   //h
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -5);
//
//		
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 28);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationspeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationspeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationspeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationspeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationspeed;
//			break;
//		default:
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//
//			GLfloat colors[] =
//			{
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0
//			};
//			
//		}
//	}
//}
//
//


//lab 28 new object 3D triangle



//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow *window, int key, int scancode, int action, int mods);
//GLfloat rotationx,rotationy;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCall);
//	//*************************************************** must enable for visibility of depth of 3d object.
//	glEnable(GL_DEPTH_TEST); // Depth Testing  
//
//
//	float vertices[] =
//	{
//		//rectangle
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   
//		1,-1,1,     //c
//		
//		1,-1,1,     //c
//		1,-1,-1,   //d
//		-1,-1,-1,  //a
//
//		//triangles
//		-1,-1,1,    //b   
//		1,-1,1,     //c    //front
//		0.5,1,-0.5,  //e
//
//		1,-1,1,     //c
//		1,-1,-1,   //d     //right
//		0.5,1,-0.5, //e
//
//		1,-1,-1,   //d
//		-1,-1,-1,  //a     //back
//		0.5,1,-0.5, //e
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b     //left
//		0.5,1,-0.5, //e
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -4);
//
//		
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//
//		
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationspeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationspeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationspeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationspeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationspeed;
//			break;
//		default:
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//
//			GLfloat colors[] =
//			{
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
//			1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0
//			};
//			
//		}
//	}
//}


// lab29    cube fixed code


//#include<GL/glew.h>
//#include<GLFW/glfw3.h>
//#include<iostream>
//using namespace std;
//
//void keyCall(GLFWwindow *window, int key, int scancode, int action, int mods);
//GLfloat rotationx,rotationy;
//
//void main()
//{
//	GLint wid = 800; //*window variable
//	GLint height = 800; //*window variable
//	GLFWwindow* window; //pointer var as window that will hold address only 
//	glfwInit();
//	if (!glfwInit())
//	{
//		cout << "glfwINit function error!!" << endl;
//	}
//	else
//	{
//		cout << "glfwINit function is available!!" << endl;
//	}
//	window = glfwCreateWindow(wid, height, "Window with background color", NULL, NULL); //*assigned window variable 
//	if (!window)
//	{
//		cout << "Window not available!!" << endl;
//	}
//	else
//	{
//		cout << "Window is opening successfully!!" << endl;
//	}
//
//	// make the window context current
//	glfwMakeContextCurrent(window);
//
//	glfwSetKeyCallback(window, keyCall);
//	//*************************************************** must enable for visibility of depth of 3d object.
//	glEnable(GL_DEPTH_TEST); // Depth Testing  
//
//
//	float vertices[] =
//	{
//		-1,-1,1,    //b
//		1,-1,1,     //c  //front
//		1,1,1,      //d
//		-1,1,1,     //g
//
//		-1,-1,-1,  //a
//		1,-1,-1,   //h   //back
//		1,1,-1,     //e 
//		-1,1,-1,    //f
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //left
//		-1,1,1,     //g
//		-1,1,-1,     //f
//
//		-1,1,-1,     //f
//		-1,1,1,     //g   //top
//		1,1,1,      //d  
//		1,1,-1,     //e 
//
//		1,1,-1,     //e 
//		1,-1,-1,   //h    //right
//		1,-1,1,     //c
//		1,1,1,      //d
//
//		-1,-1,-1,  //a
//		-1,-1,1,    //b   //bottom
//		1,-1,1,     //c
//		1,-1,-1,   //h
//	};
//
//	GLfloat colors[] =
//	{
//	0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
//	1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
//	0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
//	0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
//	0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
//	};
//
//	//gameloop
//	while (!glfwWindowShouldClose(window))
//	{
//		//for the bg color
//		glClearColor(0.5, 1, 1, 0); //for rgb color change
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//to clear the buffer
//
//
//		glMatrixMode(GL_PROJECTION_MATRIX);
//		glLoadIdentity();
//		gluPerspective(100, wid / height, 1.2, 10);
//		glTranslatef(0, 0, -5);
//
//		
//		glRotatef(rotationx, 1, 0, -1);
//		glRotatef(rotationy, 0, 1, -1);
//
//		//draw triangle
//		//glColor3f(1, 0, 0);
//		glEnableClientState(GL_VERTEX_ARRAY);
//		glEnableClientState(GL_COLOR_ARRAY);
//		glVertexPointer(3, GL_FLOAT, 0, vertices);
//		glColorPointer(3, GL_FLOAT, 0, colors);
//		glDrawArrays(GL_QUADS, 0, 28);
//		glDisableClientState(GL_COLOR_ARRAY);
//		glDisableClientState(GL_VERTEX_ARRAY);
//
//		glfwSwapBuffers(window);//to swap the new color for window
//		glfwPollEvents();
//	}
//	glfwTerminate();
//}
//
//void keyCall(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	const GLfloat rotationspeed = 1;
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationspeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationspeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationspeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationspeed;
//			break;
//		default:
//			break;
//		}
//	}
//	
//}

//lab30     2 cube with rotation 

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 640
//#define SCREEN_HEIGHT 480
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth+200, halfScreenHeight+200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth+200), -(halfScreenHeight+200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth+200, halfScreenHeight+200, -500, 100);
//		glPopMatrix();
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	0, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	0, 1, 0,
//	1, 0, 0,
//	1, 0, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 0, 1,
//	1, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 1, 1,
//	1, 1, 1,
//	1, 1, 0,
//	0, 0, 0,
//	0, 1, 0,
//	1, 1, 0,
//	1, 0, 0,
//	0, 0, 1,
//	0, 1, 1,
//	1, 1, 1,
//	1, 0, 1
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_QUADS, 0, 24);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed


//lab31     3 objects with rotation

//
//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//
//	0, 1, 0,
//	0, 0, 0,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	1, 0, 0,
//	0, 1, 0,
//	0, 0, 1,
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_QUADS, 0, 24);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed
//


//lab32 color with keys f1,f2,f3

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		// front face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		// left face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// right face
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left
//
//		// top face
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_QUADS, 0, 24);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed
//


//lab33 3D triangle rotation

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
//#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
//GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	 Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	 Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	 Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	 Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		 Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		 Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		 Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	 actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength-50), centerPosY - (halfSideLength-50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//	
//		bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}//draw cube closed


//lab34 scaling object

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//void scaling();
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
////scaling
//GLfloat scalefactor = 1.0f;
//GLboolean scaleup = false;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//
//		//scaling
//		glScalef(scalefactor, scalefactor, scalefactor);
//		scaling();
//
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//}
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		//back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		//top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//
//		//bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}
//void scaling()
//{
//	//boundaries
//	if (scalefactor >= 2.0)
//	{
//		scaleup = false;
//	}
//	if (scalefactor < 0.5)
//	{
//		scaleup = true;
//	}
//	//speed
//	if (scaleup)
//	{
//		scalefactor += 0.001;
//	}
//	else
//	{
//		scalefactor -= 0.001;
//	}
//}

//lab 35 Scaling with keys

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
////#include <iostream>
////#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
////scaling
//GLfloat scalefactor = 1.0f;
//GLboolean scaleup = false;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//
//		//scaling
//		glScalef(scalefactor, scalefactor, scalefactor);
//		
//
//
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_G:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.1;
//			}
//			else
//				scaleup = false;
//			break;
//		}
//		case GLFW_KEY_H:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.1;
//
//			}
//			else
//				scaleup = true;
//			break;
//		}
//
//		}
//
//	}
//}
//
//
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		//back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		//top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//
//		//bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}
//
//

//lab 36 translation or move

//
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
//#include <cstdlib>
//
//#define SCREEN_WIDTH 1200
//#define SCREEN_HEIGHT 800
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);
//
//
//float red = 255, green = 255, blue = 255;
//
//GLfloat rotationx = 0.0f;
//GLfloat rotationy = 0.0f;
//
////scaling
//GLfloat scalefactor = 1.0f;
//GLboolean scaleup = false;
//
//GLfloat rotationx1 = 0.0f;
//GLfloat rotationy1 = 0.0f;
//
//GLfloat rotationx2 = 0.0f;
//GLfloat rotationy2 = 0.0f;
//
//GLfloat rotationx3 = 0.0f;
//GLfloat rotationy3 = 0.0f;
////GLfloat rotationZ = 0.0f;
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	// Initialize the library
//	if (!glfwInit())
//	{
//		return -1;
//	}
//
//	// Create a windowed mode window and its OpenGL context
//	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);
//
//	glfwSetKeyCallback(window, keyCallback);
//	
//	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
//
//
//	int screenWidth, screenHeight;
//	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
//
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	// Make the window's context current
//	glfwMakeContextCurrent(window);
//	glEnable(GL_DEPTH_TEST);
//	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
//	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
//	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
//	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
//	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
//	glLoadIdentity(); // same as above comment
//
//	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
//	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;
//
//
//	// Loop until the user closes the window
//	while (!glfwWindowShouldClose(window))
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		// Render OpenGL here
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
//		glRotatef(rotationx, 1, 0, 0);
//		glRotatef(rotationy, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//
//		//scaling
//		glScalef(scalefactor, scalefactor, scalefactor);
//		
//		//translate
//		static float translate = 0;
//		glTranslatef(-0.3 + translate , -0.3 , -5);
//			
//
//		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
//		glRotatef(rotationx1, 1, 0, 0);
//		glRotatef(rotationy1, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
//		glRotatef(rotationx2, 1, 0, 0);
//		glRotatef(rotationy2, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
//		glRotatef(rotationx3, 1, 0, 0);
//		glRotatef(rotationy3, 0, 1, 0);
//		//glRotatef(rotationY, 0, 0, 1);
//		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
//		//glColor3f(1.0f, 0.0f,0.0f);
//		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
//		glPopMatrix();
//
//
//		//move speed
//		translate += 0.02;
//				
//
//		// Swap front and back buffers
//		glfwSwapBuffers(window);
//
//		// Poll for and process events
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//
//	return 0;
//}
//
//
//
//void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//	//std::cout << key << std::endl;
//
//	const GLfloat rotationSpeed = 10;
//
//	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_UP:
//			rotationx -= rotationSpeed;
//			break;
//		case GLFW_KEY_DOWN:
//			rotationx += rotationSpeed;
//			break;
//		case GLFW_KEY_RIGHT:
//			rotationy += rotationSpeed;
//			break;
//		case GLFW_KEY_LEFT:
//			rotationy -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_8:
//			rotationx1 -= rotationSpeed;
//			break;
//		case GLFW_KEY_2:
//			rotationx1 += rotationSpeed;
//			break;
//		case GLFW_KEY_6:
//			rotationy1 += rotationSpeed;
//			break;
//		case GLFW_KEY_4:
//			rotationy1 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_W:
//			rotationx2 -= rotationSpeed;
//			break;
//		case GLFW_KEY_S:
//			rotationx2 += rotationSpeed;
//			break;
//		case GLFW_KEY_D:
//			rotationy2 += rotationSpeed;
//			break;
//		case GLFW_KEY_A:
//			rotationy2 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_P:
//			rotationx3 -= rotationSpeed;
//			break;
//		case GLFW_KEY_L:
//			rotationx3 += rotationSpeed;
//			break;
//		case GLFW_KEY_M:
//			rotationy3 += rotationSpeed;
//			break;
//		case GLFW_KEY_N:
//			rotationy3 -= rotationSpeed;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_F1:
//			red = 255;
//			green = 0;
//			blue = 0;
//			break;
//		case GLFW_KEY_F2:
//			red = 0;
//			green = 255;
//			blue = 0;
//			break;
//		case GLFW_KEY_F3:
//			red = 0;
//			green = 0;
//			blue = 255;
//			break;
//		case GLFW_KEY_F4:
//			red = 255;
//			green = 0;
//			blue = 255;
//			break;
//		}
//	}
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_G:
//		{
//
//			if (scalefactor <= 2.0)
//			{
//				scalefactor += 0.1;
//			}
//			else
//				scaleup = false;
//			break;
//		}
//		case GLFW_KEY_H:
//		{
//
//			if (scalefactor >= 0.5)
//			{
//				scalefactor -= 0.1;
//
//			}
//			else
//				scaleup = true;
//			break;
//		}
//
//		}
//
//	}
//}
//
//
//
//
//void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
//{
//	GLfloat halfSideLength = edgeLength * 0.5f;
//
//	GLfloat vertices[] =
//	{
//		//back face
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//left
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//
//		//top
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
//
//		//right
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
//
//		//bottom
//		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
//		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
//		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
//	};
//
//
//
//	//color
//	GLfloat colors[] =
//	{
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue,
//	red, 0, 0,
//	0, green, 0,
//	0, 0, blue
//	};
//
//
//	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glColor3f(colors[0], colors[1], colors[2]);
//	glEnableClientState(GL_VERTEX_ARRAY);
//	glVertexPointer(3, GL_FLOAT, 0, vertices);
//
//	//color enable
//	glEnableClientState(GL_COLOR_ARRAY);
//	glColorPointer(3, GL_FLOAT, 0, colors);
//
//	glDrawArrays(GL_TRIANGLES, 0, 18);
//
//	glDisableClientState(GL_VERTEX_ARRAY);
//}


//lab 37 translation with keys



#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cstdlib>

#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 800

void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);


float red = 255, green = 255, blue = 255;

GLfloat rotationx = 0.0f;
GLfloat rotationy = 0.0f;

//scaling
GLfloat scalefactor = 1.0f;
GLboolean scaleup = false;

GLfloat rotationx1 = 0.0f;
GLfloat rotationy1 = 0.0f;

GLfloat rotationx2 = 0.0f;
GLfloat rotationy2 = 0.0f;

GLfloat rotationx3 = 0.0f;
GLfloat rotationy3 = 0.0f;
//GLfloat rotationZ = 0.0f;

//translate
GLfloat transx = 0;
GLfloat transy = 0;

int main(void)
{
	GLFWwindow* window;

	// Initialize the library
	if (!glfwInit())
	{
		return -1;
	}

	// Create a windowed mode window and its OpenGL context
	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);

	glfwSetKeyCallback(window, keyCallback);
	
	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);


	int screenWidth, screenHeight;
	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	// Make the window's context current
	glfwMakeContextCurrent(window);
	glEnable(GL_DEPTH_TEST);
	glViewport(0.0f, 0.0f, screenWidth, screenHeight); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
	glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
	glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
	glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
	glLoadIdentity(); // same as above comment

	GLfloat halfScreenWidth = SCREEN_WIDTH / 3;
	GLfloat halfScreenHeight = SCREEN_HEIGHT / 3;


	// Loop until the user closes the window
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Render OpenGL here

		glPushMatrix();
		glTranslatef(halfScreenWidth, halfScreenHeight, -500);
		glRotatef(rotationx, 1, 0, 0);
		glRotatef(rotationy, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);

		//scaling
		glScalef(scalefactor, scalefactor, scalefactor);
		
		//translate
		glTranslatef(-0.3 + transx, -0.3 + transy, -5);
			

		glTranslatef(-halfScreenWidth, -halfScreenHeight, 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth, halfScreenHeight, -500, 100);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(halfScreenWidth + 200, halfScreenHeight + 200, -500);
		glRotatef(rotationx1, 1, 0, 0);
		glRotatef(rotationy1, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-(halfScreenWidth + 200), -(halfScreenHeight + 200), 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth + 200, halfScreenHeight + 200, -500, 100);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(halfScreenWidth + 300, halfScreenHeight, -500);
		glRotatef(rotationx2, 1, 0, 0);
		glRotatef(rotationy2, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-(halfScreenWidth + 300), -halfScreenHeight, 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth + 300, halfScreenHeight, -500, 100);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(halfScreenWidth - 100, halfScreenHeight + 200, -500);
		glRotatef(rotationx3, 1, 0, 0);
		glRotatef(rotationy3, 0, 1, 0);
		//glRotatef(rotationY, 0, 0, 1);
		glTranslatef(-(halfScreenWidth - 100), -(halfScreenHeight + 200), 500);
		//glColor3f(1.0f, 0.0f,0.0f);
		DrawCube(halfScreenWidth - 100, halfScreenHeight + 200, -500, 100);
		glPopMatrix();


		
				

		// Swap front and back buffers
		glfwSwapBuffers(window);

		// Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}



void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//std::cout << key << std::endl;

	const GLfloat rotationSpeed = 10;
	const GLfloat trans = 1;

	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_UP:
			rotationx -= rotationSpeed;
			break;
		case GLFW_KEY_DOWN:
			rotationx += rotationSpeed;
			break;
		case GLFW_KEY_RIGHT:
			rotationy += rotationSpeed;
			break;
		case GLFW_KEY_LEFT:
			rotationy -= rotationSpeed;
			break;
		case GLFW_KEY_W:
			transy += trans;
			break;
			
		case GLFW_KEY_S:
			transy -= trans;
			break;
			
		case GLFW_KEY_A:
			transx -= trans;
			break;
			
		case GLFW_KEY_D:
			transx += trans;
			break;
			
		default:
			break;
		}
	}
	/*if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_8:
			rotationx1 -= rotationSpeed;
			break;
		case GLFW_KEY_2:
			rotationx1 += rotationSpeed;
			break;
		case GLFW_KEY_6:
			rotationy1 += rotationSpeed;
			break;
		case GLFW_KEY_4:
			rotationy1 -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_W:
			rotationx2 -= rotationSpeed;
			break;
		case GLFW_KEY_S:
			rotationx2 += rotationSpeed;
			break;
		case GLFW_KEY_D:
			rotationy2 += rotationSpeed;
			break;
		case GLFW_KEY_A:
			rotationy2 -= rotationSpeed;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_P:
			rotationx3 -= rotationSpeed;
			break;
		case GLFW_KEY_L:
			rotationx3 += rotationSpeed;
			break;
		case GLFW_KEY_M:
			rotationy3 += rotationSpeed;
			break;
		case GLFW_KEY_N:
			rotationy3 -= rotationSpeed;
			break;
		}
	}*/
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_F1:
			red = 255;
			green = 0;
			blue = 0;
			break;
		case GLFW_KEY_F2:
			red = 0;
			green = 255;
			blue = 0;
			break;
		case GLFW_KEY_F3:
			red = 0;
			green = 0;
			blue = 255;
			break;
		case GLFW_KEY_F4:
			red = 255;
			green = 0;
			blue = 255;
			break;
		}
	}
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_G:
		{

			if (scalefactor <= 2.0)
			{
				scalefactor += 0.1;
			}
			else
				scaleup = false;
			break;
		}
		case GLFW_KEY_H:
		{

			if (scalefactor >= 0.5)
			{
				scalefactor -= 0.1;

			}
			else
				scaleup = true;
			break;
		}

		}

	}


}




void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
{
	GLfloat halfSideLength = edgeLength * 0.5f;

	GLfloat vertices[] =
	{
		//back face
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right

		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left

		//left
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left

		//top
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
		centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left

		//right
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
		centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right

		//bottom
		centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left
		centerPosX + (halfSideLength - 50), centerPosY - (halfSideLength - 50), centerPosZ + halfSideLength, // center
		centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
	};



	//color
	GLfloat colors[] =
	{
	red, 0, 0,
	0, green, 0,
	0, 0, blue,
	red, 0, 0,

	0, green, 0,
	0, 0, blue,
	red, 0, 0,
	0, green, 0,

	0, 0, blue,
	red, 0, 0,
	0, green, 0,
	0, 0, blue,

	red, 0, 0,
	0, green, 0,
	0, 0, blue,
	red, 0, 0,
	0, green, 0,
	0, 0, blue,
	red, 0, 0,
	0, green, 0,
	0, 0, blue,
	red, 0, 0,
	0, green, 0,
	0, 0, blue
	};


	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(colors[0], colors[1], colors[2]);
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertices);

	//color enable
	glEnableClientState(GL_COLOR_ARRAY);
	glColorPointer(3, GL_FLOAT, 0, colors);

	glDrawArrays(GL_TRIANGLES, 0, 18);

	glDisableClientState(GL_VERTEX_ARRAY);
}




