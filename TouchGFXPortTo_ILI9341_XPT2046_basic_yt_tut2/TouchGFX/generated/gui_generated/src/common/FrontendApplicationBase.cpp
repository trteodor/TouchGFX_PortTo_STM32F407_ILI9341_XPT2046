/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <gui/ledscr_screen/LedScrView.hpp>
#include <gui/ledscr_screen/LedScrPresenter.hpp>
#include <gui/tictactoescreen_screen/TicTacToeScreenView.hpp>
#include <gui/tictactoescreen_screen/TicTacToeScreenPresenter.hpp>
#include <gui/thrashscreen_screen/ThrashScreenView.hpp>
#include <gui/thrashscreen_screen/ThrashScreenPresenter.hpp>
#include <gui/mp3scr_screen/Mp3ScrView.hpp>
#include <gui/mp3scr_screen/Mp3ScrPresenter.hpp>
#include <gui/tempscr_screen/TempScrView.hpp>
#include <gui/tempscr_screen/TempScrPresenter.hpp>
#include <gui/analogwatchscr_screen/AnalogWatchScrView.hpp>
#include <gui/analogwatchscr_screen/AnalogWatchScrPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// MainScreen

void FrontendApplicationBase::gotoMainScreenScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenScreenNoTransitionImpl()
{
    touchgfx::makeTransition<MainScreenView, MainScreenPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// LedScr

void FrontendApplicationBase::gotoLedScrScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoLedScrScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoLedScrScreenNoTransitionImpl()
{
    touchgfx::makeTransition<LedScrView, LedScrPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// TicTacToeScreen

void FrontendApplicationBase::gotoTicTacToeScreenScreenWipeTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoTicTacToeScreenScreenWipeTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoTicTacToeScreenScreenWipeTransitionEastImpl()
{
    touchgfx::makeTransition<TicTacToeScreenView, TicTacToeScreenPresenter, touchgfx::WipeTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ThrashScreen

void FrontendApplicationBase::gotoThrashScreenScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoThrashScreenScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoThrashScreenScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ThrashScreenView, ThrashScreenPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Mp3Scr

void FrontendApplicationBase::gotoMp3ScrScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMp3ScrScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMp3ScrScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Mp3ScrView, Mp3ScrPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// TempScr

void FrontendApplicationBase::gotoTempScrScreenBlockTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoTempScrScreenBlockTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoTempScrScreenBlockTransitionImpl()
{
    touchgfx::makeTransition<TempScrView, TempScrPresenter, touchgfx::BlockTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// AnalogWatchScr

void FrontendApplicationBase::gotoAnalogWatchScrScreenCoverTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoAnalogWatchScrScreenCoverTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoAnalogWatchScrScreenCoverTransitionEastImpl()
{
    touchgfx::makeTransition<AnalogWatchScrView, AnalogWatchScrPresenter, touchgfx::CoverTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
