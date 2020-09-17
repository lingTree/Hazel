#pragma once

#include "Core.h"
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/fmt/ostr.h>

// 命名空间
namespace Hazel
{
	// 宏处理Log类
	class HAZEL_API Log
	{
	public:
		static void Init();

		// inline内联函数 和 shared_ptr智能指针(使用后，会使对象的引用计数+1，原始对象的拷贝) &表示引用(使用后，智能指针对象就不会引用计数+1，使用的是原始的对象)
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static  std::shared_ptr<spdlog::logger> s_CoreLogger;
		static  std::shared_ptr <spdlog::logger> s_ClientLogger;
	};
}

// ::显示的标记是全局的命名空间，若没有::，则会先在当前空间查找再查找全局，当全局命名空间和局部命名空间重名时，会导致拿到错误的命名空间
// 库日志 宏
#define  HZ_CORE_ERROR(...) ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define  HZ_CORE_WARN(...)  ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define  HZ_CORE_INFO(...)  ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define  HZ_CORE_TRACE(...) ::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define  HZ_CORE_FATAL(...) ::Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// 逻辑日志 宏
#define  HZ_ERROR(...) ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define  HZ_WARN(...)  ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define  HZ_INFO(...)  ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define  HZ_TRACE(...) ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define  HZ_FATAL(...) ::Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)