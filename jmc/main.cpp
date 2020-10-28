#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;


void throwit();

int main()
{
    try
    {
        winrt::check_hresult(E_NOINTERFACE);
        //throw hresult_error(E_NOINTERFACE, take_ownership_from_abi);
        //throwit();
    }
    catch (winrt::hresult_error& e)
    {
    }
}

