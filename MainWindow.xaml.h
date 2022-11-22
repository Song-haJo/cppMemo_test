#pragma once

#include "MainWindow.g.h"

namespace winrt::cppMemo::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        //void TabView_AddTabButtonClick1(winrt::Microsoft::UI::Xaml::Controls::TabView sender, winrt::Windows::Foundation::IInspectable  args);
        //void TabView_TabCloseRequested(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewTabCloseRequestedEventArgs const& args);
        //TabViewItem CreateNewTab(int index);
        //void TabView_AddTabButtonClick(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Windows::Foundation::IInspectable const& args);
        void ComboBox_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e);
    };
}

namespace winrt::cppMemo::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
