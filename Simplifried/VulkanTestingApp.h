#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>

class VulkanTestingApp
{
public:
	void run();

private:
	GLFWwindow* window;
	VkInstance instance;

	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;

	const std::vector<const char*> validationLayers = {
		"VK_LAYER_KHRONOS_validation"
	};

#ifdef NDEBUG
	const bool enableValidationLayers = false;
#else
	const bool enableValidationLayers = true;
#endif

	// Run Phases
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();

	// Vulkan
	void createInstance();

	bool checkValidationLayerSupport();
	std::vector<const char*> getRequiredExtensions();
};

