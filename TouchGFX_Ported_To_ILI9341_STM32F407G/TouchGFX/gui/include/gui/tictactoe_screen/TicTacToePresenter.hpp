#ifndef TICTACTOEPRESENTER_HPP
#define TICTACTOEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TicTacToeView;

class TicTacToePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TicTacToePresenter(TicTacToeView& v);

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

    virtual ~TicTacToePresenter() {};

private:
    TicTacToePresenter();

    TicTacToeView& view;
};

#endif // TICTACTOEPRESENTER_HPP
