#pragma once

#include "GLSLProgramBase.h"

namespace render
{

class GLSLDepthFillProgram :
	public GLSLProgramBase
{
public:
    void create() override;
};

} // namespace render

