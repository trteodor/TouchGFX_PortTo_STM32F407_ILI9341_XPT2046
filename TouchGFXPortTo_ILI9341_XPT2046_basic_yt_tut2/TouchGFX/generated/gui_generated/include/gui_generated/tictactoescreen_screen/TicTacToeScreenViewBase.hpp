/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TICTACTOESCREENVIEWBASE_HPP
#define TICTACTOESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/tictactoescreen_screen/TicTacToeScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>

class TicTacToeScreenViewBase : public touchgfx::View<TicTacToeScreenPresenter>
{
public:
    TicTacToeScreenViewBase();
    virtual ~TicTacToeScreenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }
    touchgfx::Box __background;

private:

};

#endif // TICTACTOESCREENVIEWBASE_HPP