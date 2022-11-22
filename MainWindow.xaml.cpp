#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include <iostream>
#include <winrt/Windows.Web.Syndication.h>
#include <chrono>
#include <ctime>
#include <windows.h>
#include <stdio.h>
using namespace std;

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Windows::Foundation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::cppMemo::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}

string selectedL;
hstring text1;
hstring text2;
hstring text3;
hstring text4;
using namespace std;
void winrt::cppMemo::implementation::MainWindow::Button_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    /*
    hstring a = L"abc";
    hstring b = L"def";
    text1 = a + b;
    */
    if (selectedL == "csL") {
        //text1 = text1 + (nameInput().Text() + L"<LineBreak/>\n"); 
        /*
        strftime(to_chars(time(NULL)), 50, "%T %B %d, %Y", curr_tm);
        strftime(to_hstring(time(NULL)), 50, "Current time is %T", curr_tm);

        GetDateFormat(LOCALE_SYSTEM_DEFAULT, DATE_SHORTDATE, NULL, L"ddd, MMM dd yyyy", NULL, 0)

        auto now = std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(now);
        to_hstring(std::ctime(&time))
        
        SYSTEMTIME st, lt;
        GetSystemTime(&st);
        text1 = text1 + to_hstring(st.wHour) + to_hstring(st.wMinute);
        
        time_t current_time;
        time(&current_time);
        text1 = text1 + to_hstring(current_time);
        
        Windows::Foundation::DateTime time;
        
        time_t now = time(0);
        char* dt = ctime(&now);
        time_t now = time(0);
        auto lt = localtime(&now);
        
        */
        text1 = text1 + (nameInput().Text() + L"\t" + L"" + L"\n\n");       // This does not work.
        csL().Text(text1);
        //auto end();
        //cout << endl;
        //std::wcout << nameInput().Text().c_str() << std::endl;
    }
    else if (selectedL == "itL") {
        text2 = text2 + (nameInput().Text() + L"\t");       // This works.
        itL().Text(text2);
    }
    else if (selectedL == "goalL") {
        text3 = text3 + (nameInput().Text() + L"\t");
        goalL().Text(text3);
    }
    else {
        text4 = text4 + (nameInput().Text() + L"\t");
        urgentL().Text(text4);
    }
    
}


/*void winrt::cppMemo::implementation::MainWindow::TabView_AddTabButtonClick1(winrt::Microsoft::UI::Xaml::Controls::TabView sender, winrt::Windows::Foundation::IInspectable args)
{
    //sender.TabItems().Append(CreateNewTab(sender.TabItems().Size()));
}


void winrt::cppMemo::implementation::MainWindow::TabView_TabCloseRequested(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Microsoft::UI::Xaml::Controls::TabViewTabCloseRequestedEventArgs const& args)
{

}

TabViewItem CreateNewTab(int index)
{
    TabViewItem newItem;

    newItem.Header() = $"Document {index}";
    newItem.IconSource() = Microsoft::UI::Xaml::Controls::SymbolIconSource(Symbol = Symbol.Document);

    // The content of the tab is often a frame that contains a page, though it could be any UIElement.
    Frame frame;

    switch (index % 3)
    {
    case 0:
        frame.Navigate("BlankWindow");
        break;
    case 1:
        frame.Navigate(typeof(SamplePage2));
        break;
    case 2:
        frame.Navigate(typeof(SamplePage3));
        break;
    }

    newItem.Content() = frame;

    return newItem;
}

void winrt::cppMemo::implementation::MainWindow::TabView_AddTabButtonClick(winrt::Microsoft::UI::Xaml::Controls::TabView const& sender, winrt::Windows::Foundation::IInspectable const& args)
{

}*/

void winrt::cppMemo::implementation::MainWindow::ComboBox_SelectionChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Controls::SelectionChangedEventArgs const& e)
{
    if (cs().IsSelected()) {
        selectedL = "csL";
    }
    else if (it().IsSelected()) {
        selectedL = "itL";
    }
    else if (goal().IsSelected()) {
        selectedL = "goalL";
    }
    else {
        selectedL = "urgentL";
    }
    /*string selectedCategory = e.AddItems[0].ToString();
    switch (colorName)
    {
    case "Yellow":
        color = Colors.Yellow;
        break;
    case "Green":
        color = Colors.Green;
        break;
    case "Blue":
        color = Colors.Blue;
        break;
    case "Red":
        color = Colors.Red;
        break;
    default:
        throw new Exception($"Invalid argument: {colorName}");
    }
    Control1Output.Fill = new SolidColorBrush(color);*/
}
