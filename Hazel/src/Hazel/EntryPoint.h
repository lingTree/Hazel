#pragma once


#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();


void main(int argc, char** argv)
{
	printf("Start Engine!!!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
