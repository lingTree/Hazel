#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

// 表示已经在其他地方定义，直接拿来使用即可
extern Hazel::Application* Hazel::CreateApplication();

void main(int argc, char** argv)
{
	// 初始化日志
	Hazel::Log::Init();

	HZ_CORE_WARN("Initializd Log!");
	HZ_INFO("Hello Chuan!");

	// 启动引擎
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
