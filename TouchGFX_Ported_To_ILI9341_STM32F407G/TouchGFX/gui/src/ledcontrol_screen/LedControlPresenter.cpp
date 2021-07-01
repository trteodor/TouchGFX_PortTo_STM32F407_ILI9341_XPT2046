#include <gui/ledcontrol_screen/LedControlView.hpp>
#include <gui/ledcontrol_screen/LedControlPresenter.hpp>

LedControlPresenter::LedControlPresenter(LedControlView& v)
    : view(v)
{

}

void LedControlPresenter::activate()
{

}

void LedControlPresenter::deactivate()
{

}

void LedControlPresenter::userButtonClicked()
{
view.toggleButtonScr();
}
