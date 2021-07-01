/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TEMPSCRVIEWBASE_HPP
#define TEMPSCRVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/tempscr_screen/TempScrPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>

class TempScrViewBase : public touchgfx::View<TempScrPresenter>
{
public:
    TempScrViewBase();
    virtual ~TempScrViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }
    touchgfx::Box __background;

private:

};

#endif // TEMPSCRVIEWBASE_HPP