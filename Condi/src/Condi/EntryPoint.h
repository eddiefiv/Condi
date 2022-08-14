#pragma once

#ifdef CD_PLATFORM_WINDOWS
	
extern Condi::Application* Condi::CreateApplication();

void main(int argc, char** argv) {
	printf("Condi Engine");
	auto app = Condi::CreateApplication();
	app->Run();
	delete app;
}

#endif