#pragma once

#include "MenuElement.h"

#include <wx/menuitem.h>

namespace ui
{

class MenuItem :
	public MenuElement
{
private:
	wxMenuItem* _menuItem;

public:
	virtual wxMenuItem* getWidget() override;

protected:
	virtual void constructWidget() override;
};

}
