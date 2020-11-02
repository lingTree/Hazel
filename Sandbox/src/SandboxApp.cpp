#include "Hazel.h"

#include <imgui/imgui.h>

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		:Layer("Example")
	{

	}

	void OnUpdate() override
	{
		
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World!");
		ImGui::End();
	}

	void OnEvent(Hazel::Event& event) override
	{
		// HZ_CLIENT_TRACE("{0}", event);
		/*if ( event.GetEventType() == Hazel::EventType::KeyPressed )
		{
			Hazel::KeyPressedEvent& e = (Hazel::KeyPressedEvent&)event;
			HZ_CLIENT_TRACE("{0}", (char)e.GetKeyCode());
			if (e.GetKeyCode() == HZ_KEY_TAB)
			{
				HZ_CLIENT_TRACE("Tab key is pressed");
			}
		}*/
	}
};

class Sanbox : public Hazel::Application
{
public:
	Sanbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sanbox()
	{
		
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return  new Sanbox();
}
