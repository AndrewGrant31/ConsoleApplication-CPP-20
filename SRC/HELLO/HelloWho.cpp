#include "../inc/hello/HelloWho.h"

Hello::HelloWho::HelloWho ( const std::string value_ ) :
	who_{value_ }
{
}

const std::string Hello::HelloWho::SayHello ( ) const noexcept
{
	if ( who_.empty ( ) )
		return hello_ + world_;

	return hello_ + who_;
}
