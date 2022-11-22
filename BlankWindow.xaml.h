﻿#pragma once

#include "BlankWindow.g.h"

namespace winrt::cppMemo::implementation
{
    struct BlankWindow : BlankWindowT<BlankWindow>
    {
        BlankWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::cppMemo::factory_implementation
{
    struct BlankWindow : BlankWindowT<BlankWindow, implementation::BlankWindow>
    {
    };
}
