#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

using namespace glm;
using namespace std;

int main()
{
	if (glfwInit() == NULL) {
		cout << "glfw init failed";
	};

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(1024, 768, "Tutorial", NULL, NULL);

	if (glewInit() == NULL) {
		cout << "glew init failed";
	};

	glfwMakeContextCurrent(window);
	glewExperimental = true;

	glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
	do {

		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(window) == 0);


	return 0;
}