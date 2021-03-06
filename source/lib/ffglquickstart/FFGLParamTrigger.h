#pragma once
#include "FFGLParamEvent.h"

namespace ffglqs
{

class ParamTrigger : public ParamEvent
{
public:
	static std::shared_ptr< ParamTrigger > create( std::string name );

	ParamTrigger( std::string name );

	void Consume();
};

}//End namespace ffglqs