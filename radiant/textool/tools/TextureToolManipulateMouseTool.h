#pragma once

#include "render/View.h"
#include "math/Vector2.h"
#include "selection/ManipulateMouseTool.h"

namespace ui
{

/**
 * Specialised manipulation operations for the texture tool
 */
class TextureToolManipulateMouseTool :
    public ManipulateMouseTool
{
public:
    const std::string& getName() override;
    const std::string& getDisplayName() override;

protected:
    selection::IManipulator::Ptr getActiveManipulator() override;
	bool selectManipulator(const render::View& view, const Vector2& devicePoint, const Vector2& deviceEpsilon) override;

    void onManipulationChanged() override;
    void onManipulationCancelled() override;
	void onManipulationFinished() override;
};

}
