#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

// ��ʾ�Ѿ��������ط����壬ֱ������ʹ�ü���
extern Hazel::Application* Hazel::CreateApplication();

void main(int argc, char** argv)
{
	// ��ʼ����־
	Hazel::Log::Init();

	HZ_CORE_WARN("Initializd Log!");
	HZ_INFO("Hello Chuan!");

	// ��������
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
