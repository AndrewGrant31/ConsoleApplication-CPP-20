#pragma once

#include "pch.h"

namespace Hello
{

	class HelloWho
	{
	private:
		std::string hello_ { "Hello " };
		std::string world_ { "World" };
		std::string who_ { "" };
	
	public:
		HelloWho ( ) = default;
		HelloWho ( const std::string value_ );

		const std::string SayHello ( ) const noexcept;
	};

}