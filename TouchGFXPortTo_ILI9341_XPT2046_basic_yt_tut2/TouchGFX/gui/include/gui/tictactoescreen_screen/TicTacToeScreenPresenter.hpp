#ifndef TICTACTOESCREENPRESENTER_HPP
#define TICTACTOESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TicTacToeScreenView;

class TicTacToeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TicTacToeScreenPresenter(TicTacToeScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~TicTacToeScreenPresenter() {};

private:
    TicTacToeScreenPresenter();

    TicTacToeScreenView& view;
};

#endif // TICTACTOESCREENPRESENTER_HPP
