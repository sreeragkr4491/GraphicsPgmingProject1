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

#include<GL/glew.h>//glew lib
#include<GLFW/glfw3.h>//glfw lib
#include<iostream>
#define S_W 1000
#define S_H 800
using namespace std;

static void cursorPosition(GLFWwindow* window, double xposi, double yposi);
void cursorEnter(GLFWwindow* window, int enter);
void mouseBtn(GLFWwindow* window, int btn, int act, int mods);
void scrollBtn(GLFWwindow* window, double xoffset, double yoffset);

int main(void)//1. main fun
{
	//for window width and height
	GLint wid = 1000;
	GLint height = 800;
	//for holding window
	GLFWwindow* window;//pointer variable 

	glfwInit();//glfw initialize
	if (!glfwInit())
	{
		cout << "glfw init function error" << endl;
	}
	else
	{
		cout << "glfw init sucess" << endl;
	}
	// create a windowmode and its opengl context
	window = glfwCreateWindow(S_W, S_H, " opengl GAME WINDOW with background color", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		cout << "window error" << endl;
	}
	else
	{
		cout << "window sucess" << endl;
	}

	// make the window context current
	glfwMakeContextCurrent(window);

	//mouse functions calling 
	glfwSetCursorPosCallback(window, cursorPosition);
	glfwSetCursorEnterCallback(window, cursorEnter);
	glfwSetMouseButtonCallback(window, mouseBtn);
	glfwSetScrollCallback(window, scrollBtn);

	float vertices[] =
	{
		//road
		0,100,0,
		1000,100,0,
		1000,25,0,
		0,25,0
	};
	float colorRoad[] =
	{
		//rgb
		0,0,0,
		0,0,0,
		0,0,0
	};
	float bus[] =
	{
		//bus
		700,125,0,
		900,125,0,
		900,200,0,
		700,200,0,
	};
	float colorbus[] =
	{
		//rgb
		1,0,0,
		1,0,0,
		1,0,0,
		1,0,0
	};
	float house[] = {
		//house
		100,200,0,
		200,200,0,
		200,300,0,
		100,300,0,
		
		100,300,0,
		150,350,0,
		200,300,0
	};
	float colorhs[] =
	{
		//rgb
		0,0,1,
		0,0,1,
		0,0,1,
		0,0,1
	};
	float lwindow[] =
	{
		//left window
			120,250,0,
			130,250,0,
			130,270,0,
			120,270,0,
	};
	float colorlw[] =
	{
		//rgb
		1,1,1,
		1,1,1,
		1,1,1
	};
	float rwindow[] =
	{
		//right window
		170,250,0,
		180,250,0,
		180,270,0,
		170,270,0,
	};
	float tree[] =
	{
		//tree
			550,500,0,
			600,550,0,
			650,500,0,
			550,500,0,

	};
	float tree1[] =
	{
		//tree
		585, 500, 0,
		585, 450, 0,
		600, 450, 0,
		600, 500, 0,
		585, 500, 0,
	};
	float hill[] = {
		//hills
		0,650,0,
		100,750,0,
		250,700,0,
		200,650,0,
		0,650,0,

	};
	float hill1[] = {
		200,650,0,
		300,775,0,
		450,700,0,
		400,650,0,
		200,650,0,
		};

	float hill2[] = {
		400, 650, 0,
		500, 750, 0,
		650, 700, 0,
		600, 650, 0,
		400, 650, 0
	};
	float hill3[] = {
		600, 650, 0,
		700, 775, 0,
		850, 700, 0,
		800, 650, 0,
		600, 650, 0,
	};
	float hill4[] = {
		800,650,0,
		900,750,0,
		1000,650,0,
		800,650,0
	};

	float colorhill[] = {
		//rgb
		//as many vertex as many points
		0,1,0,
		0,1,0,
		0,1,0,
		0,1,0
	};

	//FOR SCREEN RESOLUTION
	glViewport(0, 0, S_W, S_H);//for view your screen(1. x, 2. y,3. w, 4. h)
	glMatrixMode(GL_PROJECTION);// for change matrix mode
	glOrtho(0, S_W, 0, S_H, 0.5, 0);//NEW COORDINATE SYSTEM/ hover mouse seeparameters(this represent the actual coordinate system which you changed)
	glMatrixMode(GL_MODELVIEW);//FOR DEFAULT MATRIX MODE(in future from here we will apply transformation)

	//loop untill the user not close the window
	while (!glfwWindowShouldClose(window))
	{

		//for background color
		glClearColor(0, 1, 1, 0); //for get the RGB color
		glClear(GL_COLOR_BUFFER_BIT);//for clear the buffer

		//road
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorRoad);
		glVertexPointer(3, GL_FLOAT, 0, vertices);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//bus
		glEnableClientState(GL_VERTEX_ARRAY);
		glColor3f(1, 0, 0);
		//glEnableClientState(GL_COLOR_ARRAY);
		//glColorPointer(3, GL_FLOAT, 0, colorbus);
		glVertexPointer(3, GL_FLOAT, 0, bus);
		glDrawArrays(GL_POLYGON, 0, 4);
		//glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//house
		glEnableClientState(GL_VERTEX_ARRAY);
		glColor3f(0,0,1);
		//glEnableClientState(GL_COLOR_ARRAY);
		//glColorPointer(3, GL_FLOAT, 0, colorhs);
		glVertexPointer(3, GL_FLOAT, 0, house);
		glDrawArrays(GL_POLYGON, 0, 7);
		//glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//lwindow
		glEnableClientState(GL_VERTEX_ARRAY);
		glColor3f(1, 1, 1);
		//glEnableClientState(GL_COLOR_ARRAY);
		//glColorPointer(3, GL_FLOAT, 0, colorlw);
		glVertexPointer(3, GL_FLOAT, 0, lwindow);
		glDrawArrays(GL_POLYGON, 0, 4);
		//glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//rwindow
		glEnableClientState(GL_VERTEX_ARRAY);
		glColor3f(1, 1, 1);
		//glEnableClientState(GL_COLOR_ARRAY);
		//glColorPointer(3, GL_FLOAT, 0, colorlw);
		glVertexPointer(3, GL_FLOAT, 0, rwindow);
		glDrawArrays(GL_POLYGON, 0, 4);
		//glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//tree
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, tree);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		//tree
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glDrawArrays(GL_POLYGON, 0, 5);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);


		//hills
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, hill);
		glDrawArrays(GL_POLYGON, 0, 5);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, hill1);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, hill2);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, hill3);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glColorPointer(3, GL_FLOAT, 0, colorhill);
		glVertexPointer(3, GL_FLOAT, 0, hill4);
		glDrawArrays(GL_POLYGON, 0, 4);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisableClientState(GL_VERTEX_ARRAY);

		glfwSwapBuffers(window);//for swap the new color for window
		glfwPollEvents();//it detects different event and process
	}
	glfwTerminate();
	return 0;
}


static void cursorPosition(GLFWwindow* window, double xposi, double yposi)
{
	cout << "x posi==" << xposi << "!!" << "y posi==" << yposi << endl;

}
void cursorEnter(GLFWwindow* window, int enter)
{
	if (enter)
	{
		cout << "hey you entered inside window" << endl;
	}
	else
	{
		cout << "you left the window" << endl;
	}
}
void mouseBtn(GLFWwindow* window, int btn, int act, int mods)
{
	if (btn == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_PRESS)
	{
		cout << "Right button has been pressed" << endl;
	}
	if (btn == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_PRESS)
	{
		cout << "LEft button has been pressed" << endl;
	}
}
void scrollBtn(GLFWwindow* window, double xoffset, double yoffset)
{
	cout << "xoffset==" << xoffset << "!!" << "yoffset==" << yoffset << endl;
}

