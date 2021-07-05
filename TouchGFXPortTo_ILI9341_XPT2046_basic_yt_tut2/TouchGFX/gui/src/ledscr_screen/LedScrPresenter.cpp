#include <gui/ledscr_screen/LedScrView.hpp>
#include <gui/ledscr_screen/LedScrPresenter.hpp>

LedScrPresenter::LedScrPresenter(LedScrView& v)
    : view(v)
{

}

void LedScrPresenter::activate()
{

}

void LedScrPresenter::deactivate()
{

}

void LedScrPresenter::userButtonClicked()  //LedScrPreser.cpp
{
view.toggleButtonScr();
}

